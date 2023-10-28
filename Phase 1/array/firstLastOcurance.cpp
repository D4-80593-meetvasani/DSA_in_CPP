#include<vector>
using namespace std;
int firstOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}
#include<iostream>
using namespace std;

int main()
{
    int arr[9]={0 ,0 ,1 ,1 ,2 ,2 ,2 ,2,3};
    int n = 9;
    int k;
    cin>>k; 
    cout<<"First occurance is "<<firstOcc(arr,n,k)<<endl;
    cout<<"Last occurance is "<<lastOcc(arr,n,k)<<endl;


    int tot=(lastOcc(arr,n,k)-firstOcc(arr,n,k)+1);
    if(firstOcc(arr,n,k) && lastOcc(arr,n,k)==-1){

    cout<<"Total number of occurance is 0"<<endl;
    }else{

    cout<<"Total number of occurance is "<<tot<<endl;
    }
    
}