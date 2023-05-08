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
    int reverse(int d){
    int rev=0;
    int rem;
    while (d!=0)
    {
        rem=d%10;
        rev=rev*10+rem;
        d/=10;
    }
    return rev;
    
 }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*newhead=NULL;
        ListNode*newtail=newhead;

        while(l1!=NULL || l2!=NULL){
            int sum=0;
        int temp;
        while(l1!=NULL){
            temp=l1->val;
            sum=sum*10+temp;
            l1=l1->next;
        }
        int sum2=0;
        int temp2;
        while(l2!=NULL){
           temp2=l2->val;
           sum2=sum2*10+temp2;
           l2=l2->next;
        }
         int ans=sum+sum2;
        while(ans!=0){
            int rem=ans%10;
            if(newhead==NULL){
                ListNode*p=new ListNode(rem);
                newhead=p;
                newtail=p;
            }else{
                ListNode*p=new ListNode(rem);
                newtail->next=p;
                newtail=p;
            }
            ans/=10;
        }
       
        }
        return newhead;
    }
};