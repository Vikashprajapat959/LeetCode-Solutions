
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) {
            return head;
        }

        ListNode* prev = head;
        ListNode* curr = head->next;

        while (curr != NULL) {

            if (curr->val != prev->val) {
                prev = curr;
                curr = curr->next;
            }
            else {
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            }
        }

        return head;
    }
};
