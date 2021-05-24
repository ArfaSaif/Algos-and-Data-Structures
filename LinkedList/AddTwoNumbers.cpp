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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {




        return addHelper(l1, l2, 0);






    }

    ListNode *addHelper(ListNode *h1, ListNode *h2, int carry){

        if(h1 == NULL && h2 == NULL)
        {
            if(carry)
            {
                ListNode * newNode = new ListNode (1);
                newNode -> next = addHelper (NULL, NULL, 0);
                return newNode;
            }
            return NULL;
        }
        int sum = 0;
        if(h1 == NULL && h2 !=NULL)

            sum = h2->val;
        else if(h2 == NULL && h1 !=NULL)
            sum = h1->val;
        else sum = h1->val  + h2->val;

        sum = sum + carry;

        int newCarry = sum /10;
        cout << carry;
        int newSum = sum % 10;
        ListNode * newNode = new ListNode (newSum);


        if(h1 == NULL && h2 !=NULL)

            newNode ->next = addHelper(NULL, h2->next, newCarry);
        else if(h2 == NULL && h1 !=NULL)
            newNode ->next = addHelper(h1->next, NULL, newCarry);
        else newNode ->next = addHelper(h1->next, h2->next, newCarry);

        return newNode;




    }


};
