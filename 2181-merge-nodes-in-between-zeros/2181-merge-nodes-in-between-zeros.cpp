class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;

        int sum = 0;
        
        while (fast != NULL) {
            if (fast->val != 0) {
                sum += fast->val;
            }
            else {
                slow->val = sum;
                slow->next = fast->next;

                slow = slow->next;
                sum = 0;
            }

            fast = fast->next;
        }

        return head;
    }
};