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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode * dummy = new ListNode(0);
       ListNode *tail = dummy ;
       int carry = 0;

    while(l1 != NULL || l2 != NULL || carry ){
       int  first = (l1 != NULL) ? l1->val : 0 ;
        int second = (l2 != NULL) ? l2->val : 0 ;
        

        int sum= first  + second  + carry ;
        carry = sum/10;
        int num = sum % 10;

        ListNode*  newnode = new ListNode(num);
        tail->next = newnode ;
        tail = tail->next ;

        l1 = (l1 != NULL) ? l1->next : NULL ;
        l2 = (l2 != NULL) ? l2->next : NULL ;

    }

    ListNode * result = dummy->next ;
    delete dummy ;
    return result ; 
    }
};