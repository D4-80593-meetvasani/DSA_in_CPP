#include<iostream>
using namespace std;

void alternate(int arr[],int size){
    int a=0;
    // int b=1;
    while(a<(size-1)){
        swap(arr[a],arr[a+1]);
        a+=2;
        // b+=2;
    }
}
void printArray(int arr[],int size){
    cout<<"printing the array"<<endl;
     for (int i = 0; i < size ; i++)
    {
        cout << arr[i] <<" ";

    }
    cout<<endl;
    cout<<"printing done"<<endl;
    
}

int main()
{
    int arr[6]={0,1,2,3,4,5};

    alternate(arr,6);
    printArray(arr,6);
    return 0;
}