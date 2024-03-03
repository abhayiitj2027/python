#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d1){
        data=d1;
        next=NULL;

    }
};
void match(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;

}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;cout<<endl;
        temp=temp->next;
    }
}
int main(){
    Node* temp=new Node(10);
        
    cout<<temp->data<<endl;
    cout<<temp->next<<endl;
    Node* head=temp;
    match(head,12);
    print(head);
    

       


    return 0;
}


