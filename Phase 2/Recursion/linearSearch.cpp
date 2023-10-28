#include<iostream>
using namespace std;

bool isPresent(int *arr,int size,int key){

    //base case
    if(size==0) return false;


    if(key==arr[0]) return true;

    else {
        bool remainingPart = isPresent(arr+1,size-1,key);
        return remainingPart;
    }
    
}

int main()
{
    int arr[5]={3,5,1,2,6};

    int size = 5;

    int key;
    cin>>key;


    int ans  = isPresent(arr,size,key);

    if(ans) cout<<"Key is Present !!!"<<endl;
    else cout<<"Key is NOT Present !!!"<<endl;

    return 0;
}