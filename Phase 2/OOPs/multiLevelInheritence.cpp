#include<iostream>
using namespace std;

class Animal{

    public:
    int age=100;
    int weight;


    public:
    void speak(){
        cout<<" Speaking "<<endl;
    }

};

class Dog : public Animal {

};

class GermanShepherd : public Dog {

};

int main()
{

    GermanShepherd g;
    g.speak();
    cout<<g.age<<endl;

    return 0;
}