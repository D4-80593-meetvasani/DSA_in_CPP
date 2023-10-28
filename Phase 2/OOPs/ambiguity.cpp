#include<iostream>
using namespace std;

class A{



    public:
    void print(){
        cout<<"Inside A"<<endl;
    }

};

class B {

    public:

   void print(){
        cout<<"Inside B"<<endl;
    }

};

class C : public A, public B{
    // public:
    // void print(){
    //     cout<<"Inside C"<<endl;
    // }
};


int main()
{   
    C obj;
    obj.A::print();
    
    return 0;
}