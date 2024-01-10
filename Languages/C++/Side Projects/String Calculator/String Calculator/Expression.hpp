// Expression.hpp
//
//
// Created by Kevin Shin
// 9/30/2023
// 
// 
//
//
#include <cctype>
#include <algorithm>

#ifndef Expression_hpp
#define Expression_hpp

	class Expression {
	public:
		Expression(std::string& aLHS, char& anOperand, std::string& aRHS) : lhs(aLHS), operand(anOperand), rhs(aRHS) {}
		
		Expression(const Expression& anExpression) {
			*this = anExpression;
		}
		Expression& operator=(const Expression& anExpression) {
			lhs = anExpression.lhs;
			operand = anExpression.operand;
			rhs = anExpression.rhs;
			return *this;
		}
		
		bool isValid() {
			bool theResult = true;
			if (operand) {
				theResult = std::all_of(lhs.begin(), lhs.end(), std::isdigit) && std::all_of(rhs.begin(), rhs.end(), ::isdigit) ? theResult : false;
			}
			return theResult;
		}

		std::string& getError(){ return error; }
		std::string& getLHS() { return lhs; }
		std::string& getRHS() { return rhs; }
		char& getOperand() { return operand; }
	protected:

		std::string	 lhs;
		char		 operand;
		std::string  rhs;

		std::string error;


	};

#endif // Expression_hpp