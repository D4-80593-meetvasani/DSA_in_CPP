#include<iostream>
using namespace std;

bool isPalindrome(int i,int j,string& str){

    //base case
    if(i>j) return true;

    if(str[i]!=str[j]) 
        return false;
    else {
        return isPalindrome(i+1,j-1,str);
    }

}

int main()
{
    string str;
    cin>>str;

    if(isPalindrome(0,str.length()-1,str)){
        cout<<"String is Palindrome !!!"<<endl;
    }else{
        cout<<"String is NOT a Palindrome !!!"<<endl;
    }
    
    return 0;
}