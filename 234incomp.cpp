#include<iostream>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode*next;
    ListNode(int d){
        val=d;
        next=NULL;
    }
};
void insertattail(ListNode*&head,ListNode*&tail,int data){
    if(head==NULL){
        ListNode*p=new ListNode(data);
        head=p;
        tail=p;
    }
    else{
        ListNode*p=new ListNode(data);
        tail->next=p;
        tail=p;
    }
    
}
 ListNode*reversell(ListNode*head){
    ListNode*prev=NULL;
    ListNode*curr=head;

    while(curr!=NULL){
        ListNode*ne=curr->next;
        curr->next=prev;
        prev=curr;
        curr=ne;
    }
    return prev;
}
bool llispalindromeornot(ListNode*head){
    ListNode*oldhead=head;
    ListNode*nhead=reversell(head);
    
    
    while(oldhead!=NULL){
        if(oldhead->val!=nhead->val){
            return false;
        }
        oldhead=oldhead->next;
        nhead=nhead->next;
    }
    return true;
}
void printll(ListNode*head){
    ListNode* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main(){
    ListNode*head=NULL;
    ListNode*tail=NULL;

    insertattail(head,tail,1);
    insertattail(head,tail,3);
    insertattail(head,tail,2);
    insertattail(head,tail,1);

    bool ans=llispalindromeornot(head);
    cout<<ans<<endl;
    ListNode*oldhead=head;
    ListNode*nhead=reversell(head);
   printll(oldhead);
    cout<<endl;
    printll(nhead);
}