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
     ListNode* insertGreatestCommonDivisors(ListNode* head) {
    
        if(head->next==NULL)
            return head;
        
        ListNode* slow = head;
        ListNode* fast  = head->next;
        
        while(slow && fast ){
            
            int x = slow->val;
            int y = fast->val;
            int z = __gcd(x,y);
            ListNode * temp = new ListNode(z);
            slow->next = temp;
            temp->next = fast;
            fast = fast->next;
            slow = slow->next->next;
            
            
            
        }
        
        return head;
        
    }
};