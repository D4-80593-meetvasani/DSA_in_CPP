#include<iostream>
using namespace std;

int main(){


    //---------------------hashing for arrays----------------------------
    // int arr[10] = {0,1,1,2,2,2,3,4,4,5};

    // //precompute
    // int hashh[11] = {0};

    // for(int i=0;i<10;i++){
    //     hashh[arr[i]] += 1;
    // }

    // //fetch:
    // int key;
    // cout<<"Enter number you want to search : "<<endl;
    // cin>>key;
    // cout<< key << " has appeared " << hashh[key] <<" times in array ! " <<endl;
    // return 0;


    //-------------------hashing for lowercase string--------------------------------


    // string s = "abjsfdlaa";

    // //precompute
    // int  hashh[26] = {0};

    // for(int i=0;i<s.size();i++){
    //     hashh[s[i]-'a']++;
    // }   

    // // fetch

    // char key;
    // cout<<"Enter which character you want to search : "<<endl;
    // cin>>key;

    // cout<< key <<" has occured " << hashh[key-'a'] << " times "<<endl;


    //-------------------hashing for any string--------------------------------


    string s = "AaaBBbCcDEeeeeFFFfgH";

    //precompute
    int hashh[256] = {0};

    for(size_t i=0;i<s.size();i++){
        hashh[s[i]]++;
    }   

    // fetch

    char key;
    cout<<"Enter which character you want to search : "<<endl;
    cin>>key;

    cout<< key <<" has occured " << hashh[key] << " times "<<endl;


}