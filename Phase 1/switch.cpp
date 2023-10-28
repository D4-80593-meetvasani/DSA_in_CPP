#include<iostream>
using namespace std;
int main(){
    // int num=1;

    // switch (num)
    // {
    // case 1:
    //     cout<<"one"<<endl;/* code */
    //     break;
    // case 2:
    //     cout<<"two"<<endl;/* code */
    //     break;
    
    // default:
    //     cout<<"default"<<endl;
    //     break;
    // }

    // int a,b;
    // char op;
    // cin>>a>>b>>op;

    // switch (op)
    // {
    // case '+':
    //     cout<<(a+b)<<endl;
    //     break;
    // case '-':
    //      cout<<(a-b)<<endl;
    //     break;
    // case '*':
    //     cout<<(a*b)<<endl;
    //     break;
    // case '/':
    //      cout<<(a/b)<<endl;
    //     break;
    // default:
    //     cout<<"Enter valid operator"<<endl;
    //     break;
    // }

    int money;
    cin>>money;
    int temp=money;

    switch (temp>=100)
    {
    case true:
        int coin = temp/100;
        cout<<"100 ke "<<coin<<" coin"<<endl;
        temp= temp-(coin*100); 
    }

    switch (temp>=50)
    {
    case true:
        int coin = temp/50;
        cout<<"50 ke "<<coin<<" coin"<<endl;
        temp= temp-(coin*50); 
    }

    switch (temp>=20)
    {
    case true:
        int coin = temp/20;
        cout<<"20 ke "<<coin<<" coin"<<endl;
        temp= temp-(coin*20); 
    }

    switch (temp>=10)
    {
    case true:
        int coin = temp/10;
        cout<<"10 ke "<<coin<<" coin"<<endl;
        temp= temp-(coin*10); 
    }



}