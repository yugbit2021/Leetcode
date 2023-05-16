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
    int count=0;
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*p1=head;
    ListNode*p2=head;
        
    int n=countnodes(head);

    vector<int> v;
    while(p1!=NULL){
        v.push_back(p1->val);
        p1=p1->next;
    }

    

    for(int i=0;i<=n-k;i=i+k){
        int s=i;
        int end=i+k-1;
        while(s<end){
            swap(v[s],v[end]);
            s++;
            end--;
        }
    }
    

    for(int i=0;i<v.size();i++){
        swap(v[i],p2->val);
        p2=p2->next;
    }
    return head;
    }
};