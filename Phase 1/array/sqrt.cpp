#include<iostream>
using namespace std;

int sqrtInteger(int n){
    int s=0;
    int e=n;

    long long int ans=-1;

    long long int mid = (s+e)/2;

    while (s<=e)
    {
        long long int    square = mid*mid;
        if(square==n) return mid;

        if (square<n)
        {
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

double morePrecision(int n, int precision,int tempSol){
    double factor=1;
    double ans = tempSol;

    for(int i=0;i<precision;i++){
        factor=factor/10;
        for (double j = ans; j*j<n ; j=j+factor)
        {
            ans = j;
        }
        
    }
    return ans;

}

int main()
{
    int n;
    cout<<"Enter a Number "<<endl;
    cin>>n;
    int tempSol = sqrtInteger(n);   
    cout<<"Integer answer is "<<tempSol<<endl;

    double finalSol = morePrecision(n,3,tempSol);   
    cout<<"Double answer is "<<finalSol<<endl;
}