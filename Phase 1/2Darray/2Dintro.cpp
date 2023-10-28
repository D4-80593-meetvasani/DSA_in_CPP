#include<iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col){
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            if(arr[row][col]==target){
                return 1;
            }
        }
    }
    return 0;
}

void printRowSum(int arr[][3],int row,int col){
    cout<<" Printing Row Sum -> ";
    for(int i=0;i<3;i++){
    int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
    cout<< sum <<" ";
    
    }
    cout<<endl;
}

int largestRowSum(int arr[][3], int row,int col){
    int maxi = INT_MIN;
    int rowIndex =-1;
    for(int i=0;i<3;i++){
    int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
    if(sum>maxi){
        maxi = sum;
        rowIndex = i;
    }
    
    }
    cout<<"Maximum sum from rows is : "<<maxi<<endl;
    return row;
}


void printColSum(int arr[][3],int row,int col){
    cout<<" Printing Col Sum -> ";
    for(int j=0;j<3;j++){
    int sum=0;
        for(int i=0;i<3;i++){
            sum+=arr[i][j];
        }
    cout<< sum <<" ";
    
    }
    cout<<endl;
}

int main()
{
    int arr[3][3];
    // int arr[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    // int arr[3][4] = {{1,12,123,1234},{2,23,234,2345},{3,34,345,3456}};

    // row wise input
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }


    //col wise input

    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[j][i];
    //     }
    // }

    //print
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter element to search : "<<endl;
    
    int target;
    cin>>target;

    if(isPresent(arr,target,3,3)){
        cout<<"Element found :) "<<endl;
       
    }else{
        cout<<"Not Found :( "<<endl;
      
    }

    printRowSum(arr,3,3);
    
    largestRowSum(arr,3,3);

    printColSum(arr,3,3);

    return 0;
}