// Calculator.hpp
//
// Created by Kevin Shin
// 9/30/2023
//
//
//  
//
//

#include "Expression.hpp"
#include <functional>
#include <map>


#ifndef Calculator_hpp
#define Calcualtor_hpp

	using std::invalid_argument;
	class Calculator {
	public:
		Calculator(Expression& anExpression) : expression(anExpression) {}

		std::string compute() {
			return theOperations[expression.getOperand()](expression.getLHS(), expression.getRHS());
		}

	protected:
		std::string add(std::string& aLHS, std::string& aRHS) {
			int carry = 0;
			int maxSize = std::max(aLHS.size(), aRHS.size());
			std::string result;

			aLHS = std::string(maxSize - aLHS.size(), '0') + aLHS;
			aRHS = std::string(maxSize - aRHS.size(), '0') + aRHS;

			for (int i = maxSize - 1; i >= 0; --i) {
				int digitSum = digit_to_decimal(aLHS[i]) + digit_to_decimal(aRHS[i]) + carry;
				carry = digitSum / 10;
				result = decimal_to_digit(digitSum % 10) + result;
			}

			if (carry > 0) {
				result = decimal_to_digit(carry) + result;
			}

			return trim_leading_zeros(result);
		}
		std::string subtract(std::string& aLHS, std::string& aRHS){ return std::string("subtract"); }
		std::string multiply(std::string& aLHS, std::string& aRHS){
			int size1 = aLHS.size();
			int size2 = aRHS.size();
			int maxSize = size1 + size2;
			std::string result(maxSize, '0');

			for (int i = size1 - 1; i >= 0; --i) {
				int carry = 0;
				for (int j = size2 - 1; j >= 0; --j) {
					int digitProduct = digit_to_decimal(aLHS[i]) * digit_to_decimal(aRHS[j]) +
						digit_to_decimal(result[i + j + 1]) +
						carry;
					carry = digitProduct / 10;
					result[i + j + 1] = decimal_to_digit(digitProduct % 10);
				}
				result[i] = decimal_to_digit(carry);
			}

			return trim_leading_zeros(result);
		}

		std::string divide(std::string& aLHS, std::string& aRHS){ return std::string("divide"); }

		Expression& expression;
	private:
		unsigned int digit_to_decimal(char digit) {
			if (digit >= '0' && digit <= '9') {
				return digit - '0';
			}
			throw invalid_argument("Invalid input character");
		}

		char decimal_to_digit(unsigned int decimal) {
			if (decimal <= 9) {
				return static_cast<char>(decimal + '0');
			}
			throw invalid_argument("Invalid input decimal value");
		}

		std::string trim_leading_zeros(std::string num) {
			size_t nonZeroPos = num.find_first_not_of('0');
			if (nonZeroPos != std::string::npos) {
				return num.substr(nonZeroPos);
			}
			return "0";
		}

		std::map<char, std::function<std::string(std::string&, std::string&)>> theOperations = {
		  {'+', [this](std::string& aLHS, std::string& aRHS) { return add(aLHS, aRHS); }},
		  {'-', [this](std::string& aLHS, std::string& aRHS) { return subtract(aLHS, aRHS); }},
		  {'x', [this](std::string& aLHS, std::string& aRHS) { return multiply(aLHS, aRHS); }},
		  {'*', [this](std::string& aLHS, std::string& aRHS) { return multiply(aLHS, aRHS); }},
		  {'/', [this](std::string& aLHS, std::string& aRHS) { return divide(aLHS, aRHS); }}
		};
	};

#endif // Calculator.hpp