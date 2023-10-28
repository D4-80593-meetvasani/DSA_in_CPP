#include<iostream>
using namespace std;
int divisible(int a,int b,int n){
    int c1 = n/a;
    int c2 = n/b;

    int c3= n/(a*b);

    int ans = c1+c2-c3;

    return ans;
}
int main()
{
    int a,b,n;
    cout<<"Enter two numbers : "<<endl;
    cin>>a>>b;
    cout<<"Enter the number to be divided : "<<endl;
    cin>>n;

    divisible(a,b,n);

    cout<<"there are "<<divisible(a,b,n)<<" numbers divisible by both "<<a<<" and "<<b<<endl; 

    return 0;
}