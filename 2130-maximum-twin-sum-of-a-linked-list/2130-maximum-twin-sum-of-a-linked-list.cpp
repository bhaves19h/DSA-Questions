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
    int pairSum(ListNode* head) {
     //we try to add 1st ith with the last and 2nd with last 2nd;
     ListNode* slow = head;
     ListNode* fast = head;
     while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
     };

     ListNode* curr =slow;
     ListNode* prev =NULL;
     while(curr != NULL){
        ListNode* nextN = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextN;
     }   
     int ans = INT_MIN;
     while(prev){
        ans = max(ans , head->val + prev->val);
        head = head->next;
        prev = prev->next;
     }
    return ans;
    }
};