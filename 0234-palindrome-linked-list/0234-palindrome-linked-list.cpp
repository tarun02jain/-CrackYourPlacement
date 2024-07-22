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
   ListNode* reverseLi(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = NULL;

        while(temp){
            ListNode * temp1 = temp->next;
            temp->next = prev;
            prev = temp;
            temp = temp1;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next == NULL) return true;
        ListNode* slow = head;
        ListNode *fast = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *index = head;
        slow = reverseLi(slow);
        while(slow){
            if(slow->val != index->val) return false;
            slow = slow->next;
            index = index->next;
        }
        return true;
    }
};