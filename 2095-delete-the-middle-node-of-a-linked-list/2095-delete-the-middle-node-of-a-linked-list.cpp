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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *dummy, *slow, *fast;
        dummy = new ListNode(0, head);
        slow = dummy;
        fast = head;
        
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode *nodeToDel = slow->next;
        slow->next = slow->next->next;
        nodeToDel = nullptr;
        delete nodeToDel;
        
        return dummy->next;
    }
};