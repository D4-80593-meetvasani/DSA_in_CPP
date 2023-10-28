#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
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

void insertAtHead(Node* &head,int d){

    //new node create
    Node* temp = new Node(d);

    temp -> next = head;

    head = temp;


}

void insertAtTail(Node* &tail,int d){
    //new node create
    Node* temp = new Node(d);

    tail -> next = temp; 
    tail = tail -> next;

}

void insertAtPosition(Node* &tail,Node* &head,int position,int data){

    //if position is 1 / Insert at start

    if(position==1){
        insertAtHead(head,data);
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
        insertAtTail(tail,data);
        return;
    }

    //creating a node for data
    Node* nodeToInsert = new Node(data);

    nodeToInsert ->next = temp->next;
    temp ->next = nodeToInsert;
    
}

//<_______________________NODE DELETION____________________>

void deleteNode(int position,Node* &head,Node* &tail){

    //deleting from start

    if(position==1){
        Node* temp = head;
        head = head -> next;
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
        prev->next = curr->next;
        curr->next=NULL;
        if (prev->next == NULL) {
             tail = prev;
        }
        delete curr;
       
    }
    
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

Node* getStartingNode(Node* head) {

    if(head == NULL) 
        return NULL;

    Node* intersection = floydDetectLoop(head);
    
    if(intersection == NULL)
        return NULL;
    
    Node* slow = head;

    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }  

    return slow;

}


Node *removeLoop(Node *head)
{
    if( head == NULL)
        return NULL;

    Node* startOfLoop = getStartingNode(head);
    
    if(startOfLoop == NULL)
        return head;
    
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop) {
        temp = temp -> next;
    } 

    temp -> next = NULL;
    return head;
}


//traversing a linked list
void print(Node* &head){

    Node* temp = head;

    while (temp!=NULL)
    {
        cout<< temp->data<<" ";
        temp = temp->next;
    }
   cout<<endl; 

}

int main()
{
    //created a new node
    Node* node1 = new Node(10);

    // cout<<node1 -> data<<endl;

    // cout<<node1 ->next<<endl;

    //<---------------head pointed to node1------------------>

    //<-----------------INSERT AT HEAD__________________________>
    Node* head = node1;
    // print(head);
    // insertAtHead(head,12);
    // print(head);
    // insertAtHead(head,15);
    // print(head);

    cout<<"-------------------------------------------------"<<endl;
    //<--------------------INSERT AT TAIL____________________________>

    Node* tail = node1;
    print(head);
    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,15);
    print(head);

    cout<<"-------------------------------------------------"<<endl;
    //<-------------------INSERT AT POSITION_------------------------->

    insertAtPosition(tail,head,4,22);
    print(head);

    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;

    cout<<"-------------------------------------------------"<<endl;
    deleteNode(4,head,tail);

    print(head);

    cout<<"NEW Head "<<head->data<<endl;
    cout<<"NEW Tail "<<tail->data<<endl;

    cout<<"-------------------------------------------------"<<endl;

    return 0;
}