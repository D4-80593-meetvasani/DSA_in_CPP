#include<iostream>
using namespace std;

int power(int n){
    
    //base case

    if(n==0) return 1;

    int smallerProblem = power(n-1);
    int biggerProblem = 2 * smallerProblem;

    return biggerProblem;

}

int main()
{
    int n;
    cin>>n;

    int ans = power(n);

    cout<<"Answer of 2 raise to "<<n<<" is " <<ans<<endl;

    return 0;
}