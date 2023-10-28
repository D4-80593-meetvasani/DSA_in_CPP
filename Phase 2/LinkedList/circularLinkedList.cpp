#include<iostream>
#include<map>
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

void insertNode(Node* &tail,int element,int data ){

    //empty list
    if(tail==NULL){
        //create a node
        Node* newNode = new Node(data);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //assuming that the element is present in the list

        Node* curr = tail;

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

void deleteNode(Node* &tail,int value){

    //emppty list
    if(tail==NULL){
        cout<<"List is empty , please check again !!!"<<endl;
        return;
    }else{
        //non empty wala case

        //assuming the value is present in the list

        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data!=value){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        //1 node linked list
        if(curr==prev){
            tail = NULL;
        }
        // >=2 node Linked list
        else if(tail==curr){
            tail =prev;
        }

        curr->next = NULL;

        //memory free
        delete curr;

    }

}

void print(Node* &tail){

        Node* temp = tail;

        if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
        }

        do{
             cout<<tail->data<<" ";
            tail=tail->next;
        }

        while(tail!=temp);
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

bool detectLoop(Node* head){

    if(head==NULL) return false;

    map<Node* ,bool> visited;

    Node* temp = head;

    while(temp!=NULL){
        //cycle is present
        if(visited[temp]==true){
            return true;
        }

        visited[temp]=true;
        temp=temp->next;
    }

    return false;

}

Node* floydDetectLoop(Node* head) {

    if(head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast !=NULL) {
        
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast) {
            return slow;
        }
    }

    return NULL;

}




int main()
{   
    Node* tail = NULL;

    //empty list mei insert karee
    insertNode(tail,5 ,3);
    print(tail);
    
    insertNode(tail,3 ,5);
    print(tail);

    /* 
    insertNode(tail,5 ,7);
    print(tail);

    insertNode(tail,7 ,9);
    print(tail);

    insertNode(tail,5 ,6);
    print(tail);

    insertNode(tail,9 ,10);
    print(tail);

    insertNode(tail,3 ,4);
    print(tail);
    
    deleteNode(tail,3);
    print(tail);
    */

   if(isCircularList(tail)){
    cout<<"Linked List is Circular"<<endl;
   }else{
    cout<<"Linked List is NOT Circular"<<endl;
   }    

   

    return 0;
}