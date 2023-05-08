#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node(int d){
        data=d;
        next=NULL;
    }
};
void insertattail(node*&head,node*&tail,int data){
    if(head==NULL){
        node*p=new node(data);
        head=p;
        tail=p;
    }
    else{
        node*p=new node(data);
        tail->next=p;
        tail=p;
    }
   
}
void printll(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int sumofll(node*head){
    if(head==NULL){
        return 0;
    }
    node*temp=head;
    int i=1;
    int sum=0;
    while(temp!=NULL){
        if(sum==0){
            sum=temp->data;
            temp=temp->next;
        }
        sum=((10*i)*temp->data)+sum;
        i=i*10;
        temp=temp->next;
    }
    return sum;
}
node* addTwoNumbers(node* l1, node* l2) {
        int sum1=sumofll(l1);
        int sum2=sumofll(l2);
        int tsum=sum1+sum2;

        node*nhead=NULL;
        node*ntail=NULL;
        while(tsum!=0){
            int rem=tsum%10;
            insertattail(nhead,ntail,rem);
            tsum=tsum/10;
        }
        return nhead;
    }
int main(){
    node*head1=NULL;
    node*tail1=NULL;
    node*head2=NULL;
    node*tail2=NULL;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        insertattail(head1,tail1,d);
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int d;
        cin>>d;
        insertattail(head2,tail2,d);
    }
    node*nhead=addTwoNumbers(head1,head2);
    printll(nhead);
}