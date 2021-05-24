/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        std::unordered_set<void *> addresses;
        ListNode * firstList = headB;
        while(firstList != NULL)
        {
                addresses.insert(firstList);
            firstList = firstList->next;
        }
        while(headA !=NULL)
        {
            if(addresses.find(headA) != addresses.end())
                return headA;
            headA=headA->next;
        }
        return NULL;

    }
};
