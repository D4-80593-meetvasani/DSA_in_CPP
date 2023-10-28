#include<iostream>
using namespace std;

void a(int arr[],int size,int start=0){
    for (int i = start; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int size = 5;

    a(arr,5);
    cout<<endl;
    a(arr,5,2);

    return 0;
}