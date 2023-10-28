#include<iostream>
using namespace std;

bool isSorted(int *arr,int size){

    //base case

    if(size==0||size==1) return true;

    //processing and Recursive relation

    if(arr[0]>arr[1]) 
        return false;
    else 
    {
        bool remainPart = isSorted(arr+1,size-1);
        return remainPart;
    }
}


int main()
{
    int arr[5] = {2,4,9,9,9};

    int size = 5;

    bool ans = isSorted(arr,size);

    cout<<endl;
    if(ans) cout<<"Array is sorted !!! "<<endl;
    else cout<<"Array is NOT sorted !!!"<<endl;
    cout<<endl;
    
    return 0;
}