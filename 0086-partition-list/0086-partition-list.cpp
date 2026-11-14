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
    ListNode* partition(ListNode* head, int x) {

ListNode* fp = new ListNode(-1);
ListNode* sp = new ListNode(-1);
//step 1
auto fptail = fp;
auto sptail = sp;

auto it = head;
while(it){
    if(it->val<x){
        fptail->next = it;
        fptail = fptail->next;
        }
    else{
       sptail->next = it;
       sptail = sptail->next;

    }
    it = it->next;
}

fptail->next = sp->next;
sptail->next = NULL;
return fp->next;
    }
};