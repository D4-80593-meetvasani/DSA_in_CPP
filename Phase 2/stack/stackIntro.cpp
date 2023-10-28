#include<iostream>
#include<stack>
using namespace std;

// int main()
// {
//     //creation of stack

//     stack<int> s ; 

//     //push operation
//     s.push(2);
//     s.push(3);

//     //pop
//     s.pop();
    
//     //printing top element
//     cout<<endl;
//     cout<<"top elementt --> "<<s.top()<<endl;
//     cout<<endl;

//     // s.pop();

//     if(s.empty()){
    //     cout<<"Stack is emptyyy !!!"<<endl;
    // }else{
    //     cout<<"Stack is NOT emptyyy !!!"<<endl;
    // }
//     cout<<endl;
//     cout<<"size of stack is "<<s.size()<<endl;
//     cout<<endl;

//     return 0;
// }


//-------------------------Implementation without STL --------------------->


class Stack{
    //properties
    public :
        int *arr;
        int top;
        int size;

    // behaviour
    Stack(int size){
        this->size = size;
        arr = new int [size];
        top  = -1;

    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top] = element;
        }else{
            cout<<"Stack Overflow  !!!"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"Stack Underflow !!!"<<endl;
        }
    }

    int peek(){
        if(top>=0 ){
            return arr[top];
        }else{
            cout<<"Stack is emptyyy !!!"<<endl;
            return -1;
        }

    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
    }

};

int main(){

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(45);
    st.push(46);
    // st.push(47);

    cout<<"top elementt --> "<<st.peek()<<endl;

    st.pop();

    cout<<"top elementt --> "<<st.peek()<<endl;
    st.pop();
    cout<<"top elementt --> "<<st.peek()<<endl;
    st.pop();
    cout<<"top elementt --> "<<st.peek()<<endl;

    if(st.isEmpty()){
    cout<<"Stack is emptyyy !!!"<<endl;
    }else{
        cout<<"Stack is NOT emptyyy !!!"<<endl;
    }
    
}