#include<iostream>
using namespace std;

int factorial(int n){


    //<---------------base case----------------------->//

    if(n==0) return 1;

    //<---------------Explaination-------------------->//

    int chotiProblem = factorial(n-1);

    int badiProblem = n * chotiProblem;

    return badiProblem;

    //<---------------One liner---------------------->//


    return n * factorial(n-1);

}

int main()
{
    int n;
    cin>>n;

    int ans =  factorial(n);

    cout<<ans<<endl;

    return 0;
}