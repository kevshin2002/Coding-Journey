/*
* Helper.hpp
*
* Coded by Kevin Shin
*
*/
 
#ifndef Helper_hpp
#define Helper_hpp

#include "keywords.hpp"
#include <algorithm>
#include <string>
#include <map>

namespace Leetcode{
    static std::map<Identifier, Difficulty> kDifficulties = {
            std::make_pair(Identifier::TwoSum, Difficulty::Easy),
            std::make_pair(Identifier::AddTwoNumbers, Difficulty::Medium),
            std::make_pair(Identifier::LongestSubStringWithoutRepeatingCharacters, Difficulty::Medium)
    };

    static std::map<Identifier, DataType> kDatatypes = {
        std::make_pair(Identifier::TwoSum, DataType::Array),
        std::make_pair(Identifier::AddTwoNumbers, DataType::LinkedList),
        std::make_pair(Identifier::LongestSubStringWithoutRepeatingCharacters, DataType::String)
    };

    static std::map<Identifier, Algorithm> kAlgorithms = {
        // Populate as needed
    };

    static std::map<const char*, Keywords> kKeywords = {
        // Selections
        std::make_pair("one", Keywords::One),
        std::make_pair("two", Keywords::Two),
        std::make_pair("three", Keywords::Three),
        std::make_pair("four", Keywords::Four),
        std::make_pair("five", Keywords::Five),
        std::make_pair("six", Keywords::Six),
        std::make_pair("seven", Keywords::Seven),
        std::make_pair("eight", Keywords::Eight),
        std::make_pair("nine", Keywords::Nine),
        std::make_pair("ten", Keywords::Ten),

        // Options
        std::make_pair("previous", Keywords::Previous),
        std::make_pair("next", Keywords::Next),
        std::make_pair("exit", Keywords::Exit)
    };

    class Helpers {
    public:
        static Keywords getOption(const char* anOption) {
            return kKeywords.count(anOption) ? kKeywords[anOption] : Keywords::unknown;
        }

        static const char* diffToString(Difficulty aDifficulty) {
            switch (aDifficulty) {
                case Difficulty::Easy: return "Easy";
                case Difficulty::Medium: return "Medium";
                case Difficulty::Hard: return "Hard";
                default: return "unknown";
            }
        }
    };
}

#endif // Helper.hpp