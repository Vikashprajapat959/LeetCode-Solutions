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
int getlength(ListNode* head){
    int len = 0;
    while(head!=NULL){
        len++;
        head = head->next;
    }
    return len;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = getlength(head);
        if(len == n){
            ListNode* temp = head->next;
            delete(head);
            return temp;
        }
        int travel_front = len-n;
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(travel_front--){
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        delete(temp);
        return head;
    }
};