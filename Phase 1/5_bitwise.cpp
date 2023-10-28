#include<iostream>
using namespace std;
int main(){
    // int a=4;
    // int b=6;
    // cout<<"a&b "<< (a&b) <<endl;
    // cout<<"a|b "<< (a|b )<<endl;
    // cout<<"~a "<<~a<<endl;
    // cout<<"a^b "<<(a^b) <<endl;

    // cout<<(17>>1)<<endl;
    // cout<<(17>>2)<<endl;
    // cout<<(19<<1)<<endl;
    // cout<<(21<<2)<<endl;

    // int i=7;

    // cout<<(++i)<<endl;// 8
    // cout<<(i++)<<endl;// 8 , i=9
    // cout<<(i--)<<endl;//9, i=8
    // cout<<(--i)<<endl;//7 ,i=7

    // int a,b=1;
    // a=10;
    // if(++a){
    //     cout<<b;

    // }else{
    //     cout<<++b;
    // }

    // int a=1,b=2;
    // if(a-- > 0 && ++b>2){
    //     cout<<"Inside if"<<endl;
    // }else{
    //     cout<<"Inside else"<<endl;
    // }
    // cout<<a<<" "<<b<<endl;

    // int n=3;
    // cout<<(25*(++n));

    // int a=1;
    // int b=++a;
    // int c=a++;
    // cout<<b<<" "<<c<<endl;




    // int n,sum=0;
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     // cout<<i<<endl;
    //     sum=sum+i;
    // }
    //     cout<<sum;


    // int n=9;
    // bool isPrime = 1;

    // for(int i=2;i<n;i++){
    //     if(n%i==0){
    //     isPrime=0;
    //     break;
    //     }
    // }
    // if(isPrime==0){
    //     cout<<"Not prime";
    // }else{
    //     cout<<"Prime";
    // }


    // for(int i=0;i<5;i++){
    //     for(int j=i;j<=5;j++){
    //         cout<<i<<" "<<j<<endl; 
    //     }
    // }

    int array[10]={3,0,8,1,12,8,9,2,13,10};
    int x;
    int y;
    int z;
    x = ++array[2];
    y = array[2]++;
    z = array[x++];
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
 }