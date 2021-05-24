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
    bool hasCycle(ListNode *head) {

        unordered_map <void *,int> nodesList;


        bool found = false;
        int pos = -1;
        while(head !=NULL)
        {
            cout<<"address val" << head;
            if(nodesList.find(head) == nodesList.end()){
                nodesList.insert(make_pair(head, pos));
                // cout<<"did not found" << head->val;
                head = head->next;

            }
            else{

                return true;
            }


        }
        return false;


    }
};
