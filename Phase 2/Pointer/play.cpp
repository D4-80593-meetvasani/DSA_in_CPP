#include<iostream>
using namespace std;

int main()
{
    // int i = 5;
    // int *q=&i;
    // cout<<*q<<endl;
    // cout<<q<<endl;


    // int *p = 0;
    // p = &i;
    // cout<<*p<<endl;
    // cout<<p<<endl;


    int num = 5;
    int a = num;
    a++;
    cout<<num<<endl;
    int *p = &num;
    (*p)++;
    cout<<num<<endl;

    int *q = p;

    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;

    int i = 3;
    int *t = &i;

    *t = *t + 1;
    cout<<*t<<endl;
    cout<<"before t "<<t<<endl;
    t=t+1;
    cout<<"after t "<<t<<endl;
    return 0;
}