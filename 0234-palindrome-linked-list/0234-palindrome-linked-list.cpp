class Solution {
public:
int getLengthOfLinkedList(ListNode*head){
      int len = 0;
      ListNode*temp = head;
      while(temp!=NULL){
        len++;
        temp= temp->next;
      }
      return len;
}
ListNode* midnode(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast!=NULL && fast->next!= NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
ListNode* reverseLinkedList(ListNode* head) {
    if(head == NULL) {
        return NULL;
    }
    ListNode* prev = NULL;
    ListNode* curr = head;

    while(curr != NULL) { 
        ListNode* forward = curr->next;
        curr->next = prev;
    prev = curr;
    curr = forward;
    }
    head = prev;
    return prev;
}
    bool isPalindrome(ListNode* head) {
        int length = getLengthOfLinkedList(head);
        ListNode* Mid = midnode(head);
        ListNode* finalmid = NULL;
        if(length &1){
            finalmid = Mid->next;
        }
        else{
            finalmid = Mid;
        }
        finalmid = reverseLinkedList(finalmid);
          ListNode* temp = head;
        while(temp != NULL && finalmid != NULL){

              if(temp->val != finalmid->val) {
                return false;
            }

            temp = temp->next;
            finalmid = finalmid->next;

        }
        return true;
    }
};