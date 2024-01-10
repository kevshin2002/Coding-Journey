/*
* Helper.hpp
*
* Coded by Kevin Shin
*
*/

#ifndef ProblemFactory_hpp
#define ProblemFactory_hpp

#include "AbstractFactory.hpp"
#include "TwoSum.hpp"
#include "AddTwoNumbers.hpp"

namespace Leetcode {
	class ProblemFactory : public Creational::AbstractFactory<Identifier, UniqueProblem> {
	public:
		ProblemFactory() {
			add<Identifier::TwoSum>([&]() { return std::make_shared<TwoSumProblem>(); });
			add<Identifier::AddTwoNumbers>([&]() { return std::make_shared<AddTwoNumbersProblem>(); });

			theProblems.push_back(create(Identifier::TwoSum));
			theProblems.push_back(create(Identifier::AddTwoNumbers));
		}
		std::vector<UniqueProblem>& getNext(size_t& anIndex) {
			theProblems.clear();
			size_t theCount = 10;
			size_t theSize = kDifficulties.size();
			while (anIndex < theSize || theCount) {
				Identifier theIdentifier = static_cast<Identifier>(anIndex);
				UniqueProblem theProblem = create(theIdentifier);
				theProblems.push_back(theProblem);
				theCount--;
				anIndex++;
			}
			return theProblems;
		}

		std::vector<UniqueProblem>& getPrevious(size_t& anIndex) {
			theProblems.clear();
			size_t theCount = 10;
			size_t theSize = kDifficulties.size();
			while (anIndex > 0 || theCount) {
				Identifier theIdentifier = static_cast<Identifier>(anIndex);
				UniqueProblem theProblem = create(theIdentifier);
				theProblems.push_back(theProblem);
				theCount--;
				anIndex--;
			}
			return theProblems;
		}

		std::vector<UniqueProblem>& getProblems() {return theProblems;}

	protected:
		std::vector<UniqueProblem> theProblems;
	};
}

#endif // ProblemFactory.hpp