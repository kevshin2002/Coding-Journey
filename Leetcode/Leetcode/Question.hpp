/*
* .hpp
*
* Coded by Kevin Shin
*
*/

#ifndef Question_hpp
#define Question_hpp

#include "Problem.hpp"
#include <iostream>
#include <vector>

struct ListNode{
 int val;
 ListNode* next;
 ListNode(int x) : val(x), next(NULL) {}
 };


namespace Leetcode {
	class Question : public Problem {
	public:
		Question() : Problem("Question") {}

		std::stringstream solution() override{

		}

	protected:
        bool hasCycle(ListNode* head) {
            auto* firstPointer = head;
            auto* secondPointer = head;
            while (secondPointer && secondPointer->next) {
                firstPointer = firstPointer->next;
                secondPointer = secondPointer->next->next;
                if (firstPointer == secondPointer)
                    return true;
            }
            return false;
        }
    };
};


#endif // Question.hpp