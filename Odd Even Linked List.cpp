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
    ListNode* oddEvenList(ListNode* head) {

            if(head == NULL) 
                return head;
 
    ListNode* result = head;
    ListNode* p1 = head;
    ListNode* p2 = head->next;
    ListNode* connectNode = head->next;
 
    while(p1 != NULL && p2 != NULL){
            ListNode *t = p2->next;
            if(t == NULL)
                break;
 
            p1->next = p2->next;
            p1 = p1->next;
 
            p2->next = p1->next;
            p2 = p2->next;
    }
 
    p1->next = connectNode;
 
    return result;
        
    }
};
