#include<iostream>
using namespace std;

int getMax(int num[],int n){
     int maxi = INT_MIN;
     for(int i=0;i<n;i++){
         maxi = max(maxi,num[i]);
        //  if(num[i]>max){
        //      max = num[i];
        //  }
     }
     return maxi;
}

int getMin(int num[],int n){
     int mini = INT_MAX;
     for(int i=0;i<n;i++){

         mini = min(mini,num[i]);
        //  if(num[i]<mini){
        //      mini = num[i];
        //  }
     }
     return mini;
}

int main(){
    int size;
    cin>>size;

    int num[100];
    int maxx= INT_MIN;
    int minn = INT_MAX;
    for (int i=0;i<size;i++){
        cin>>num[i];
        //  maxx = max(maxx,num[i]);
        //  minn = min(minn,num[i]);
        
    }

    // cout<<"Max is "<<maxx<<endl;
    // cout<<"Min is "<<minn<<endl;


    cout<<"Max is "<<getMax(num,size)<<endl;
    cout<<"Min is "<<getMin(num,size)<<endl;
}


// sum of all elements in array

// int main(){

//     int size;
//     cin>>size;
//     int sum=0;

//     int a[100];

//     for (int i = 0; i < size; i++)
//     {
//         cin>>a[i];
//     }
    
//     for (int i = 0; i < size; i++)
//     {
//         sum = sum + a[i];
//     }
//     cout<<sum<<endl;

// }
