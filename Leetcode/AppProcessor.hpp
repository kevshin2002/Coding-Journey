/*
* AppProcessor.hpp
* 
* Coded by Kevin Shin
* 
*/

#ifndef AppProcessor_hpp
#define AppProcessor_hpp

#include "ProblemFactory.hpp"
#include "StringView.hpp"
#include "keywords.hpp"
#include <vector>

namespace Leetcode {
	class AppProcessor {
	public:
		bool process(Keywords& aKeyword, ViewListener aViewer) {
			std::vector<UniqueProblem>& theProblems = theFactory.getProblems();
			view = render(theProblems);
			aViewer(view);
			return true;
		}
	protected:
		bool getSelection(Keywords& aKeyword) {}
		AppProcessor& round() {
			index = (index / 10) * 10;
		}

		std::string render(std::vector<UniqueProblem>& aProblems) {
			std::stringstream theStream;
			size_t theCount = 1;
			// Table Formatting
			for (const auto& theProblem : aProblems) {
				theStream << theCount << ". " << theProblem->getName() << "\n";
				theCount++;
			}
			// Table Formatting
			return theStream.str();
		}
	private:
		size_t index = 0;
		bool previous = false;
		ProblemFactory theFactory;
		StringView view;
		
	};
}

#endif // AppProcessor