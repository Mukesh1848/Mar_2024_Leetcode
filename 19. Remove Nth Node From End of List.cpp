// 19. Remove Nth Node From End of List


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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) return head;
        if(head->next==NULL && n==1) return NULL;

         ListNode* temp = head;
         int len =0;

         while(temp != NULL){
             len++;
             temp = temp->next;
         }

         if(len ==2 && n==1){
              head->next = NULL;
              return head;
         }

         if(len == 2 && n==2){
             return head->next;
         }

         if(len == n) return head->next;

        int NthNode = len-n-1;
        temp = head;
         while(NthNode > 0){
             temp = temp->next;
              NthNode--;
         }
         temp->next = temp->next->next;

         return head;
    }
};
