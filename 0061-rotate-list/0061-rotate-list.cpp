
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
    ListNode* rotateRight(ListNode* head, int k) {
       if(head==NULL){
    return head;
}
        int length = getlength(head);
        int rotationofk = k%length;
         if (rotationofk == 0) return head;
       int travelitems = length - rotationofk - 1;
        ListNode* newLastNode = head;

        for(int i =0;i<travelitems;i++){
            newLastNode = newLastNode->next;
        }
        ListNode*newhead = newLastNode->next;
        newLastNode->next = NULL;
        ListNode* it = newhead;
        while(it->next){
            it = it->next;
        }
        it ->next = head;
        return newhead;
          }
};
