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
int countnodes(ListNode*head){
    int count =0;
    if(head==NULL){
        return 0;
    }else{
        ListNode*temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
            }
            return count;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=head;
        if(head==NULL || head->next==NULL){
            return NULL;
        }

        if(countnodes(head)-n==0){
            head=head->next;
            return head;
        }
        
        for(int jump=1;jump<countnodes(head)-n;jump++){
            temp=temp->next;
        }
        ListNode*t=temp->next;
        temp->next=t->next;
        delete t;
        t=NULL;
        return head;
    }
};