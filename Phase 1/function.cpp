#include<iostream>
using namespace std;


// int power(){
//     int a,b;
//     cin>>a>>b;
//     int ans=1;

//     for(int i=1;i<=b;i++){
//         ans=ans*a;
//     }
//         return ans;

// }

// int main(){
//     int answer = power();
//     cout<<answer;
//     int answerr = power();
//     cout<<answerr;
//     return 0;


// }


//even odd


// bool evenOdd(int num){
//     if (num%2==0)
//     {
//         return true;
//     }else{
//         return false;
//     }
    
// }

// int main(){
//     int a;
//     cin>>a;
//     if (evenOdd(a))
//     {
//         cout<<"num is even";
//     }else{
//         cout<<"num is odd";
//     }
    
// }




//nCr


// int fact(int n){
//     int fac=1;
//     for(int i=1;i<=n;i++){
//         fac=fac*i;
//     }
//     return fac;
// }

// int nCr(int n,int r){
//     int num = fact(n);
//     int denom = fact(r)* fact(n-r);
//     return num/denom;
// }

// int main(){
//     int n,r;
//     cin>>n>>r;
//     cout<<nCr(n,r)<<endl;
// }



//is Prime


// bool isPrime(int num){
//     for (int i = 2; i < num; i++)
//     {
//         if(num%i==0){
//             return false;
//         }
//     }
//     return true;
    
// }

// int main(){
//     int num;
//     cin>>num;
//     if(isPrime(num)){
//         cout<<"Number is prime"<<endl;
//     }
//     else{
//         cout<<"not prime"<<endl;
//     }
// }


//output codes

// int update(int a){
//     int ans = a*a;
//     return ans;
// }

// int main(){
//     int a=14;
//     a=update(a);
//     cout<<a<<endl;
// }

// int update(int a){
//     a -=5 ;
//     return a;
// }

// int main(){
//     int a=15;
//     update(a);
//     cout<<a<<endl;
// }

// int AP(int n){
    
//     int AP=(3*n+7);
//     return AP;
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<AP(n)<<endl;
// }


//count N bits

// int countSetBits(int a,int b)
// {
//      int count = 0;
//     while (a) {
//         count += a & 1;
//         a >>= 1;
//     }while (b) {
//         count += b & 1;
//         b >>= 1;
//     }
//     return count;
// }
 
// int main()
// {
//     int a ;
//     int b ;
//     cin>>a>>b;
//     cout << countSetBits(a,b);
//     return 0;
// }


//fibbonacci


int fib(int n)
{
    int a = 0, b = 1, c, i;
    if( n == 0)
        return a;
    for(i = 2; i <= n; i++)
    {
       c = a + b;
       a = b;
       b = c;
    }
    return b;
}
 
int main()
{
    int n;
    cin>>n;
     
    cout << fib(n);
    return 0;
}