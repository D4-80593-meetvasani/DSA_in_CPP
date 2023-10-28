#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    // cout<<num<<endl;

    //address of operator
    int *p = &num;
    cout<<"Value is "<<*p<<endl;
    cout<<"Address of "<<*p<<" is "<<p<<endl;

    cout<<"Size of Integer is "<<sizeof(num)<<endl;
    cout<<"Size of Pointer is "<<sizeof(p)<<endl;

    return 0;
}