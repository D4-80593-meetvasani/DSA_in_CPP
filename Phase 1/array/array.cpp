#include <iostream>
using namespace std;

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
    int i, n=10;


    int first[10]={0};
    printArray(first,10);

    int second[10]={5,2,3};
    printArray(second,10);


    int abc[n];
    for (i = 0; i < 10; i++)
    {
        abc[i] = 5;
    }
    printArray(abc,10);

    int abcSize=sizeof(abc)/sizeof(int);
    cout<<abcSize;
}