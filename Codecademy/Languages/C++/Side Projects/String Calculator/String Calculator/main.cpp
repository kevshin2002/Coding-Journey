#include <iostream>
#include <string>
#include <limits>
#include <sstream>
#include "Expression.hpp"
#include "Calculator.hpp"

int main() {
        std::cout << "String Calculator\n";
        std::cout << "\"q\" or \"quit\" or ctrl+d to exit\n";

        std::string theInput;
        while (std::getline(std::cin, theInput)) {
            if (theInput == "q" || theInput == "quit")
                break;

            std::stringstream theInputs(theInput);
            std::string theFirst, theOperand, theSecond;

            while (!theInputs.eof()) {
                theInputs >> theFirst >> theOperand >> theSecond;
                Expression theExpression(theFirst, theOperand[0], theSecond);
                if (theExpression.isValid()) {
                    Calculator theCalc(theExpression);
                    std::cout << "ans = \n" << theCalc.compute() << "\n";
                }
                else
                    std::cout << "Invalid expression. " << theExpression.getError();
            }
        }
        std::cout << "Exiting String Calculator. Goodbye!" << std::endl;

        return 0;
    }

