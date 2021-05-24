/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {

        // reverse linked list

        if(head == NULL)
            return false;
        if(head -> next == NULL)
            return true;


        ListNode * newHead = new ListNode(head->val);
        ListNode * cur = head -> next;
        ListNode * cur2 = newHead;
        // copy Linked List
        while(cur != NULL){
            cur2 -> next = new ListNode(cur->val);
            cur = cur -> next;
            cur2 = cur2-> next;
        }

        ListNode * reverseListCur = newHead;
        ListNode * prev = NULL;

        while(reverseListCur != NULL){

            ListNode * nextNode = reverseListCur-> next;
            reverseListCur-> next = prev;
            prev = reverseListCur;
            reverseListCur = nextNode;

        }
        // check if equal
        ListNode * h1 = prev;
        ListNode * h2 = head;

        while(h1!=NULL){
            if(h1-> val != h2-> val)
                return false;
            h1 = h1-> next;
            h2= h2-> next;
        }
        return true;

    }
};
