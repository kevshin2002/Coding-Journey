/*
* TwoSum.hpp
*
* Coded by Kevin Shin
*
*/

#ifndef TwoSums_hpp
#define TwoSums_hpp

#include "Problem.hpp"
#include <iostream>
#include <vector>

namespace Leetcode {
    class TwoSumProblem : public Problem {
    public:
        TwoSumProblem() : Problem("Two Sum") {}
        std::stringstream solution() override {
            std::vector<int> listofNums{ 3, 2, 4 };
            int target = 6;
            auto theSolution = twoSum(listofNums, target);
            std::stringstream theStream;
            for (auto aInt : theSolution) {
                theStream << aInt << " ";
            }
            return theStream;
        }

    protected:
        std::vector<int> twoSum(std::vector<int>& nums, int target) {
            std::vector<int> theSolutions;
            size_t count = 0;
            for (auto& number : nums) {
                count++;
                uint32_t wantedNumber = target - number;
                auto theNumber = std::find(nums.begin() + count, nums.end(), wantedNumber);
                if (std::end(nums) != theNumber) {
                    theSolutions.push_back(count - 1);
                    theSolutions.push_back(theNumber - nums.begin());
                    break;
                }
            }
            return theSolutions;
        }
    };

}

#endif // TwoSums.hpp