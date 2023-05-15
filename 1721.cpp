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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*p1=head;
        ListNode*p2=head;
        //kth node from end
        for(int jump=1;jump<=k;jump++){
            p2=p2->next;
        }
        while(p2!=NULL){
            p2=p2->next;
            p1=p1->next;
        }


// kth node from start
        ListNode*p3=head;

        for(int jump=1;jump<k;jump++){
            p3=p3->next;
        }
        swap(p1->val,p3->val);

        return head;


            }
};