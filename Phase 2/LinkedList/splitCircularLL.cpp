#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this ->data;
        //memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }


};

void insertNode(Node* &head,int element,int data ){

    //empty list
    if(head==NULL){
        //create a node
        Node* newNode = new Node(data);
        head = newNode;
        newNode -> next = newNode;
    }
    else{
        //assuming that the element is present in the list

        Node* curr = head;

        while(curr->data!=element){
            curr=curr->next;
        }

        //element is found current is representing element wala node

        //creating node
        Node* temp = new Node(data);

        temp->next  = curr ->next;
        curr->next =  temp;

    }
}

void print(Node* &head){

        Node* temp = head;

        if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
        }

        do{
             cout<<head->data<<" ";
            head=head->next;
        }

        while(head!=temp);
        cout<<endl;
        cout<<"Head : "<<head->data<<endl;
        cout<<endl;

}
bool isCircularList(Node* head){
    //empty list
    if(head==NULL){
        return true;
    }

    Node* temp = head -> next;
    
     while(temp!=NULL && temp!=head){
        temp = temp->next;
    }
    

    if(temp==head){
        return true;
    }
    return false;
}

void splitListEven(Node* &head){

    Node* fast = head;
    Node* slow  = head;
    
    while(fast->next->next!=head){
        fast = fast->next->next;
        slow = slow->next;
    }
    
    Node* head2 = slow->next;
    fast->next->next = head2;
    slow->next=head;
    
    print(head);
    print(head2);


      
//    if(isCircularList(head2)){
//     cout<<"Linked List 2 is Circular"<<endl;
//    }else{
//     cout<<"Linked List 2 is NOT Circular"<<endl;
//    }   
}


void splitListOdd(Node* &head){

    Node* fast = head;
    Node* slow  = head;
    
    while(fast->next!=head){
        fast = fast->next->next;
        slow = slow->next;
    }
    
    Node* head2 = slow->next;
    fast->next = head2;
    slow->next=head;
    
    print(head);
    print(head2);


      
//    if(isCircularList(head2)){
//     cout<<"Linked List 2 is Circular"<<endl;
//    }else{
//     cout<<"Linked List 2 is NOT Circular"<<endl;
//    }   


}


int main()
{
    Node* head = NULL;

    insertNode(head,0,1);
    insertNode(head,1,2);
    insertNode(head,2,3);
    insertNode(head,3,4);
    insertNode(head,4,5);
    insertNode(head,5,6);
    insertNode(head,6,7);
  

    print(head);

    // splitListEven(head);
    splitListOdd(head);
    
//    if(isCircularList(head)){
//     cout<<"Linked List is Circular"<<endl;
//    }else{
//     cout<<"Linked List is NOT Circular"<<endl;
//    }   

    return 0;
}