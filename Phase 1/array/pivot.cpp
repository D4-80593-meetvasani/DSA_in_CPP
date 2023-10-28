#include<iostream>
using namespace std;

int getPivot(int arr[],int n){
    //pivot for distinct numbers
     int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;

    // pivot for non-distinct numbers

    // for(int i=0;i<n-1;i++){
    //     if (arr[i]>arr[i+1])
    //     {
    //         return i+1;
    //     }
        
    // }
    // return 0;
}

int main()
{

    //non-distinct numbers

    // int arr[7]={2,2,2,3,2,2,2};
    // int arr1[5]={1,0,1,1,1};

    //distinct numbers

    int arr2[5]={3,8,10,17,1};
    int arr3[5]={7,9,1,2,3};

    // cout<<"Pivot is "<<getPivot(arr,7)<<endl;
    // cout<<"Pivot is "<<getPivot(arr1,5)<<endl;
    cout<<"Pivot is "<<getPivot(arr2,5)<<endl;
    cout<<"Pivot is "<<getPivot(arr3,5)<<endl;
}