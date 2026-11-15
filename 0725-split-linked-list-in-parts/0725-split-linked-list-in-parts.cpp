
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n = 0;
        ListNode* curr = head;
        while(curr!=NULL){
            n++;
            curr = curr->next;
        }
        int eachnodesize = n/k;
        int extranode = n%k;
         vector<ListNode*> ans(k,NULL);
         curr = head;
         for(int i = 0;i<k;i++){
            ans[i] =  curr;
            ListNode* prev = NULL;
            for(int count = 0; count < eachnodesize + (extranode> 0 ? 1 : 0); count++){
    prev = curr;
    curr = curr->next;
}
extranode--;
            if(prev!=NULL){
                prev->next = NULL;
            }
         }
         return ans;
    }
};
