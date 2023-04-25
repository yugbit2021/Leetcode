#include<iostream>
using namespace std;

class node {
  public:
  int val;
  node*next;
  node(int d){
    val=d;
    next=NULL;
  }
 };
 void insertatfirst(node*&head, node*&tail ,int d){
    //linkedlist is empty
    if(head==NULL){
        node*p=new node(d);
        head=p;
        tail=p;
    }
    else{
        node*p=new node(d);
        tail->next=p;
        tail=p;
    }
}

 int addTwoNumbers(node* l1) {
    int temp=0;
    while(l1->next!=NULL){
        temp=temp*10+l1->val;
    }
      return temp;
    }

    int min(){
      node*head=NULL;
    node*tail=NULL;

    insertatfirst(head,tail,2);
    insertatfirst(head,tail,3);
    insertatfirst(head,tail,9);
    insertatfirst(head,tail,6);

    cout<<addTwoNumbers(head);
        return 0;
    }
