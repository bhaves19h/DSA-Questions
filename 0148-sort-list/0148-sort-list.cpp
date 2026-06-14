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
    ListNode* sortList(ListNode* head) {
        forward_list<int> myL;
        auto it = myL.before_begin();
        ListNode* current = head;
        
        while (current != nullptr) {
            it = myL.insert_after(it, current->val);
            current = current->next;
        }
        
        
        myL.sort(); 
        
        // 3. Convert the STL list back into a new ListNode chain
        ListNode* dummy = new ListNode(0); // Temporary anchor node
        ListNode* tail = dummy;
        
        for (int value : myL) {
            tail->next = new ListNode(value);
            tail = tail->next;
        }
        
        ListNode* newHead = dummy->next;
        delete dummy; // Clear the temporary anchor
        return newHead;
    }
};