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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     /*     ListNode* a=headA;
        ListNode* b=headB;
        int l1=0;
        int l2=0;
       
        for(ListNode *curr=headA;curr!=NULL; curr=curr->next) l1++;
        for(ListNode *curr=headB;curr!=NULL; curr=curr->next) l2++;
            
        while(l1>l2){
            l1--;
            a=a->next;
            
        }
        
        while(l2>l1){
            l2--;
            b=b->next;
        }
        
        while(a!=b){
           a=a->next;
            b=b->next;
        }
        
      return a;*/
        
        ListNode* d1=headA;
        ListNode* d2=headB;
        
        while(d1!=d2){
            if(d1==NULL){
                d1=headB;
                
            }
            else if(d1!=NULL){
                d1=d1->next;
            }
            
            if(d2==NULL){
                d2=headA;
            }
            
            else if(d2!=NULL)
            d2=d2->next;
        }
        return d1;
    }
};