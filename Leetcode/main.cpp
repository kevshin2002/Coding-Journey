/*
* main.cpp
*
* Coded by Kevin Shin
*
*/

#include <iostream>
#include "Helper.hpp"
#include "AppProcessor.hpp"

int main(int argc, const char* argv[]) {
	Leetcode::AppProcessor theProcessor;
	bool running = false;
	do {
		std::string theInput;
		Leetcode::Keywords theKeyword = Leetcode::Keywords::unknown;

		if (running) {
			std::cin >> theInput;
			theKeyword = Leetcode::Helpers::getOption(theInput.c_str());
		};

		running = theProcessor.process(theKeyword, [&](Leetcode::View& aView) {
			aView.show(std::cout);
			});
	} while (running);
	
	return 0;
}
