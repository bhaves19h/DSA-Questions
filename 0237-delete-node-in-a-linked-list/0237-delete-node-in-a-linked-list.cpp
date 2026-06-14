/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
      node->val = node->next->val;
    
    // 2. Save a pointer to the next node so we can delete it safely
    ListNode* temp = node->next;
    
    // 3. Link the current node to skip over the next node
    node->next = node->next->next;
  
    delete temp;
    }
};