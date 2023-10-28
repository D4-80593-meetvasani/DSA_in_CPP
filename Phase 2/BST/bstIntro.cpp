#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d){
            this->data=d;
            this->left=NULL;
            this->right=NULL;
        } 
};
void inorder(Node* root){

    //base case
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

void preorder(Node* root){

    //base case
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(Node* root){

    //base case
    if(root==NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}

void levelOrderTraversal(Node* root){   //breadth first search

    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node* temp = q.front();
        
        q.pop();

        if(temp == NULL){  //purana level traverse ho chuka hai

            cout<<endl;

            if(!q.empty()){ //queue still has some child nodes
                q.push(NULL);
            }

        }else{
            cout<< temp->data <<" ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
    }

}

Node* insertIntoBST(Node* root,int d){

    //base case
    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(d>root->data){
        //insert to right
        root->right = insertIntoBST(root->right,d );
    }else{
        //insert to left
        root->left = insertIntoBST(root->left,d);
    }   
    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;


    while(data != -1){
        root = insertIntoBST(root,data);
        cin>>data;
    }
}

Node* minVal(Node* root){

    Node* temp = root;
    while(temp->left!=NULL){
        temp = temp->left;
    }
    return temp;
}

Node* maxVal(Node* root){

    Node* temp = root;
    while(temp->right!=NULL){
        temp = temp->right;
    }
    return temp;
}

Node* deleteFromBST(Node* root,int val){

    if(root == NULL){
        return root;
    }

    if(root->data == val){
        // 0 child
        if(root->left == NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //1 child

        //left child 
        if(root->left!=NULL && root->right==NULL){
            Node* temp =root->left;
            delete root;
            return temp;
        }
        //right child
        if(root->left==NULL && root->right!=NULL){
            Node* temp =root->right;
            delete root;
            return temp;
        }

        //2 child
        if(root->left!=NULL && root->right!=NULL){
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right,mini);
            return root;
        }
    }else if(root->data > val){
        //left part 
        root->left = deleteFromBST(root->left,val);
        return root;
    }else{
        //right part
        root->right = deleteFromBST(root->right,val);
        return root;

    }

}


int main()
{
    Node* root = NULL;

    cout<<"Enter data to create BST "<<endl;
    //50 20 70 10 30 90 110 -1
    takeInput(root);

    cout<<"Printing of BST "<<endl;

    levelOrderTraversal(root);

    cout<<"Printing inorder "<<endl;
    inorder(root);

    cout<<endl<<"Printing preorder "<<endl;
    preorder(root);

    cout<<endl<<"Printing postorder "<<endl;
    postorder(root);
    cout<<endl;
    cout<<endl;
    cout<<" Min Val is "<<minVal(root)->data<<endl;
    cout<<" Max Val is "<<maxVal(root)->data<<endl;

    cout<<endl;

//deletion
    root = deleteFromBST(root,10);

//<<<---------------------------------------->>>
    cout<<"Printing of BST "<<endl;

    levelOrderTraversal(root);

    cout<<"Printing inorder "<<endl;
    inorder(root);

    cout<<endl<<"Printing preorder "<<endl;
    preorder(root);

    cout<<endl<<"Printing postorder "<<endl;
    postorder(root);
    cout<<endl;
    cout<<" Min Val is "<<minVal(root)->data<<endl;
    cout<<" Max Val is "<<maxVal(root)->data<<endl;

    cout<<endl;

    return 0;
}