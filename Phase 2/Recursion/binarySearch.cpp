#include<iostream>
using namespace std;

void print(int *arr,int s,int e){

    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}


bool binarySearch(int *arr,int start,int end,int key){

    print(arr,start,end);

    //base case -----> Element not found 
    if(start>end) return false;


    int mid = start + (end-start)/2;
    
    cout<<"VAlue of mid is "<<arr[mid]<<endl;

    //base case -----> Element Found

    if(arr[mid] == key) return true;

    //processing and recursive relation

    if(arr[mid]<key){
        //Right me jaao
        return binarySearch(arr,mid+1,end,key);
    }else{
        //left me jao
        return binarySearch(arr,start,end-1,key);
    }
}


int main()
{

    int arr[6] = {2,4,6,10,14,16};
    int size = 6;

    int key;
    cin>>key;

    binarySearch(arr,0,5,key);

    if(binarySearch(arr,0,5,key)) cout<<"Element Found :)"<<endl;
    else cout<<"Element Not found :(";

    return 0;
}