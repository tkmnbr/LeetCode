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
    bool isPalindrome(ListNode* head) {
        if(head != nullptr)
        {
            stack<int>st;
            ListNode *p = head;
            while(p != nullptr)
            {
                st.push(p->val);
                p = p->next;
            }
            while(head != nullptr)
            {
                int i = st.top();
                if(head->val != i)
                    return false;
                head = head->next;
                st.pop();
            }
        }
        return true;
    }
};