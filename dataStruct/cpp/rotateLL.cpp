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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || k == 0)
            return head;
            
        ListNode *tail = head;
        int length = 1; //for the head
        while(tail->next){
            length++;
            tail = tail->next;
        }
        tail->next = head;
       
        for(int i = 0; i < (length-(k%length)); ++i)  //length of the list - k normalized to l left shifts = k right shifts
            tail = tail->next;
        
        head = tail->next;
        tail->next = nullptr;
        
        return head;
    }
};