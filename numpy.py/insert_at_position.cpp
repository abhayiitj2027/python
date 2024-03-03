#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d){
        data=d;
        next=NULL;

    }
    
};
void insertattail(node* &tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    tail=tail->next;
}
void insert_at_position(node* head,int position,int data){
    node* temp=head;
    int p=1;
    while(p<position-1){
        temp=temp->next;
        p++;

    }
    node* nodetoinsert=new node(data);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}
void print(node* tail){
    node* temp=tail;
    while(temp!=NULL){
        cout<<temp->data;cout<<endl;
        temp=temp->next;

    }
}
int main(){
    node* node1=new node(4);
    node* tail= node1;

    insertattail(tail,122);
    insertattail(tail,123);
    insert_at_position(node1,2,8);
    print(node1);
    return 0;
}


