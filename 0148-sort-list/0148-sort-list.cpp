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
ListNode* midel(ListNode* head){
    ListNode* slow = head;
ListNode* fast = head->next;
    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
 ListNode* merge(ListNode* p1,ListNode* p2){
    if(p1==NULL or p2==NULL){
        return (p1==NULL)?p2:p1;
    }
    ListNode* ans = new ListNode(0);
    ListNode* curr = ans;
    while(p1!=NULL && p2!=NULL){
        if(p1->val<p2->val){
            curr->next = p1;
            p1 = p1->next;
        }
        else{
              curr->next = p2;
            p2 = p2->next;
        }
        curr = curr->next;
    }
   curr->next = (p1 != NULL) ? p1 : p2;
return ans->next;
}
    ListNode* sortList(ListNode* head) {
      if(head == NULL || head->next == NULL) {
    return head;
}
        ListNode* mid = midel(head);
        ListNode* newNode = mid->next;
        mid->next = NULL;
        ListNode* first_half = sortList(head);
        ListNode* second_half = sortList(newNode);
        return merge(first_half,second_half);
    }
};