#include<iostream>
using namespace std;

class Vehicle{

    public:
    string car;

    public:
    void print(){
        cout<<"Inside Vehicle"<<endl;
    }

};

class BMW : public Vehicle{

    public:

   void print1(){
        cout<<"Inside BMW"<<endl;
    }

};

class Audi : public Vehicle, public BMW{
    public:
    void print2(){
        cout<<"Inside Audi"<<endl;
    }
};


int main()
{   
    Audi obj1;
    obj1.print1();
    obj1.print2();
 
    Vehicle obj2;
    obj2.print();

    BMW obj3;
    obj3.print1();
    obj3.print();


    
    return 0;
}