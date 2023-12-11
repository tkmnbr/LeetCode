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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* s = head;
        while(s != nullptr && s->next != nullptr){
            if(s->val == s->next->val){
                s->next = s->next->next;
                continue;
            }
            else 
                s = s->next;
        }
        return head;
    }
};