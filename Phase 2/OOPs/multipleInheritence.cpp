#include<iostream>
using namespace std;

class Animal{

    public:
    int age=100;
    int weight;


    public:
    void bark(){
        cout<<" barking "<<endl;
    }

};

class Human{

    public:
    string color;

    public:
    void speak(){
        cout<<" speaking "<<endl;
    }


};

//multiple inheritence karte hai 

class Hybrid: public Animal,public Human{



};


int main()
{

    Hybrid obj1;
    obj1.speak();
    obj1.bark();

    

    return 0;
}