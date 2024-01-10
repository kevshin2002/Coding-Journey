/*
* Problem.hpp
*
* Coded by Kevin Shin
*
*/

#include "keywords.hpp"
#include "StringView.hpp"
#include <memory>

#ifndef Problem_hpp
#define Problem_hpp

namespace Leetcode {
	class Problem {
	public:
		Problem(const char* aName) : name(aName) {}
		virtual ~Problem() {}
		virtual std::stringstream solution() = 0;
		
		std::string& getName() { return name; }
	protected:
		std::string name;
	};
	using UniqueProblem = std::shared_ptr<Problem>;
}

#endif // Problem.hpp