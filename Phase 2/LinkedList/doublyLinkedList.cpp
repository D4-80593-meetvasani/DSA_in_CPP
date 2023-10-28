#include<iostream>
using namespace std;

class Node{
    
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor

    Node(int d){
        this->data = d;
        this->prev= NULL;
        this->next= NULL;
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


// <------------------------------------------------------------------------>
void insertAtHead(int data,Node* &head,Node* &tail){

    if(head==NULL){
         //creating a node 
        Node* temp = new Node(data);
        head = temp;
        tail=temp;
    }else{
        //creating a node 
        Node* temp = new Node(data);

        temp->next=head;
        head->prev=temp;
        head=temp;
    }

  

}
// <------------------------------------------------------------------------>

void insertAtTail(int data,Node* &head,Node* &tail){

    if(tail==NULL){
         //creating a node 
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }else{
       
     //creating a node 
    Node* temp = new Node(data);

    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}

// <------------------------------------------------------------------------>

void  insertAtPosition(int data,int position,Node* &head,Node* &tail){

    //if position is 1 / Insert at start

    if(position==1){
        insertAtHead(data,head,tail);
        return;
    }

    //new node create
    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp -> next;
        cnt++;
    }

    //Insert at Last position

    if(temp->next==NULL){
        insertAtTail(data,head,tail);
        return;
    }

    //creating a node for data
    Node* nodeToInsert = new Node(data);

    nodeToInsert ->next = temp->next;
    temp ->next->prev = nodeToInsert;
    
    temp->next=nodeToInsert;

    nodeToInsert->prev=temp;

}
// <------------------------------------------------------------------------>
    //<_______________________NODE DELETION____________________>

void deleteNode(int position,Node* &head,Node* &tail){

    //deleting from start

    if(position==1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp -> next;
        //memory free start node
        temp->next=NULL;
        delete temp;
    } else {
        //deleting any middle node or last node

        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        

        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;

        if (prev->next == NULL) {
             tail = prev;
        }
        delete curr;
       
    }
    
}


// <------------------------------------------------------------------------>
void print(Node* &head,Node* &tail){

    Node* temp = head;
    while(temp!=NULL) {
        cout<< temp->data<<" ";
        temp = temp->next;
    }
   cout<<endl; 
     cout<<"-------------------------------------------------"<<endl;
      cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;
     cout<<"-------------------------------------------------"<<endl;
}
// <------------------------------------------------------------------------>

int getLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL) {
        len++;
        temp = temp->next;
    }
   return len; 
}

int main()
{   
    Node* node1 = new Node(10);
    Node* head  = NULL;
    Node* tail  = NULL;

    // print(head);
    // cout<< getLength(head)<<endl;
     cout<<"-------------------------------------------------"<<endl;

    insertAtHead(11,head,tail);
    insertAtHead(13,head,tail);
    insertAtHead(8,head,tail);
    // print(head,tail);

     cout<<"-------------------------------------------------"<<endl;
    insertAtTail(25,head,tail);
    // print(head,tail);
 
      cout<<"-------------------------------------------------"<<endl;
    insertAtPosition(100,2,head,tail);
    insertAtPosition(101,1,head,tail);
    insertAtPosition(102,7,head,tail);
    print(head,tail);
      cout<<"-------------------------------------------------"<<endl;

    deleteNode(7,head,tail);
    print(head,tail);

      cout<<"-------------------------------------------------"<<endl;
    cout<<"Length "<< getLength(head)<<endl;
      cout<<"-------------------------------------------------"<<endl;
    return 0;
}