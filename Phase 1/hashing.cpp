#include<iostream>
using namespace std;

int main(){

    int arr[10] = {0,1,1,2,2,2,3,4,4,5};

    //precompute
    int hashh[11] = {0};

    for(int i=0;i<10;i++){
        hashh[arr[i]] += 1;
    }

    //fetch:
    int key;
    cout<<"Enter number you want to search : "<<endl;
    cin>>key;
    cout<< key << " has appeared " << hashh[key] <<" times in array ! " <<endl;
    return 0;
}