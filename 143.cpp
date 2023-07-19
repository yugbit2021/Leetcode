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
    void reorderList(ListNode* head) {
        if((!head) || (!head->next) || (!head->next->next)){
            return ;
        }
        stack<ListNode*> my_stack;
        int size=0;
        ListNode*p1=head;
        while(p1!=NULL){
            my_stack.push(p1);
            size++;
            p1=p1->next;
        }
        ListNode*p2=head;
        for(int i=0;i<size/2;i++){
            ListNode*element=my_stack.top();
            my_stack.pop();
            element->next=p2->next;
            p2->next=element;
            p2=p2->next->next;
        }
        p2->next=NULL;
    }
};