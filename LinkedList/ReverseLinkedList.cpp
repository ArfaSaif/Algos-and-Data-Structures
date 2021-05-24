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
    ListNode* reverseList(ListNode* head) {

        // three pointers
        if(head == NULL || head -> next == NULL)
            return head;


        ListNode * prev = NULL;
        bool first = false;
        ListNode * cur = head;

        // last case
        while(cur != NULL)
        {
           ListNode * nextNode = cur -> next;
           cur -> next = prev;
           prev = cur;
           cur = nextNode;


        }

        return prev;


    }
};


// FASTER
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

        ListNode * slow = head;
        ListNode * fast = head;

        while(fast->next !=NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast-> next->next;
        }

        ListNode * secondHead = slow->next;

        slow->next = NULL;

      
        ListNode * reverseListCur = secondHead;
        ListNode * prev = NULL;

        while(reverseListCur != NULL){

            ListNode * nextNode = reverseListCur-> next;
            reverseListCur-> next = prev;
            prev = reverseListCur;
            reverseListCur = nextNode;

        }
       cout << prev->val;
        // check if equal
        // ListNode * h1 = prev;
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
