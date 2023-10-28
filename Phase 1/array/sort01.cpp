#include<iostream>
using namespace std;


void sortOne(int arr[],int size){
    int left = 0;
    int right = size-1;
    while(left<right){
        while (left<right && arr[left]==0)
        {
            left++;
        }
        while (left<right && arr[right]==1)
        {
            right--;
        }
        
        if (left<right)
        {
        swap(arr[left],arr[right]);
        left++;
        right--;
        }
        
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[8] = {1,1,0,0,0,0,1,0};

    sortOne(arr, 8);
    printArray(arr, 8);


    
    return 0;
}