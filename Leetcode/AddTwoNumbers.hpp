/*
* AddTwoProblems.hpp
*
* Coded by Kevin Shin
*
*/


#ifndef AddTwoNumbers_hpp
#define AddTwoNumbers_hpp

#include "Problem.hpp"
#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

namespace Leetcode {
    class AddTwoNumbersProblem : public Problem {
    public:
        AddTwoNumbersProblem() : Problem("Add Two Numbers") {}

        std::stringstream solution() override {
            ListNode* aNode = new ListNode(1);
            std::vector<ListNode*> nodeListOne{ aNode };
            std::vector<ListNode*> nodeListTwo{};
            std::stringstream theStream;

            size_t sizeOfListOne = nodeListOne.size();
            for (size_t anIndex = 0; anIndex < sizeOfListOne; anIndex++) {
                if (anIndex + 1 < sizeOfListOne) {
                    nodeListOne[anIndex]->next = nodeListOne[anIndex + 1];
                }
            }

            for (auto aNode : nodeListOne) {
               theStream << aNode->next << "\n";
            }
            return theStream;
        }

    protected:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            size_t sizeOfL1 = 0;
            size_t sizeOfL2 = 0;

            while (l1->next != nullptr) {
                sizeOfL1++;
            }
            while (l2->next != nullptr) {
                sizeOfL2++;
            }
        }

    };
}

#endif // AddTwoNumbers.hpp