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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            n++;
            temp = temp->next;
        }
        int idealpartsize = n/k;
        int extraNode = n%k;
     vector<ListNode*> ans(k, NULL);
     ListNode* it = head;
     for(int i=0;i<k && it!=NULL;i++){
        ans[i]= it;
        int actualCurrentPartSize = idealpartsize +(extraNode-- > 0?1:0);
        for(int j =0;j<actualCurrentPartSize-1;j++){
            it = it->next;
        }
        ListNode* nextPartStarting = it->next;
            it->next = NULL;
            it = nextPartStarting;
     }
        return ans;
    }
};