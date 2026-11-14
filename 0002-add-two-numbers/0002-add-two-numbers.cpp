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
ListNode* itrative(ListNode* l1, ListNode* l2){
   ListNode* ans = new ListNode(-1);
        auto it = ans;
        int c = 0;
        while(l1 || l2||c){
            int a = l1?l1->val:0;
                int b= l2?l2->val:0;
                int sum = a+b+c;
                int digit = sum%10;
                c = sum/10;
                // stored the digit in the ans;
                it->next = new ListNode(digit);
                it= it->next;
                l1 = l1?l1->next:0;
                l2 = l2 ? l2->next:0;
        }
        return ans->next;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return itrative(l1,l2);
    }
};