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
    int getDecimalValue(ListNode* head) {
         int ans = 0;
        ListNode* temp = head;
        
        while(temp) {
			
			//updating ans in each iteration 
            ans = ans *2 + temp -> val;
			
			//moving forward each time
            temp = temp -> next;
        }
        
		//returning final and
        return ans;
        
      /*  int count=0;
        while(head){
            count++;
            head=head->next;
        }
        
        int ans;
        
        while(count>0){
            ans=ans+pow(2,count-1);
            count--;
        }
        return ans;*/
    }
};