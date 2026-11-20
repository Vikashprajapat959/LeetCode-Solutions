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
    ListNode* mergeNodes(ListNode* head) {
        if(head == NULL){
            return 0;
        }
        ListNode* newNode = 0;
           ListNode*slow = head;
              ListNode*fast = head->next;
              int sum = 0;
              while(fast != NULL){
                if(fast->val !=0){
                    sum+= fast->val;
                }
                else{
                    slow->val = sum;
                    newNode = slow;
                    slow = slow->next;
                    sum = 0;
                }
                fast = fast->next;
              }
              newNode->next = NULL;
        return head;      
    }
};