#include<iostream>
#include<string>
using namespace std;

bool isUniqueChars(string str,int n){
  int checker = 0;
  for(int i = 0;i<n;i++){
    int value = str.at(i) - 'a';
    if((checker & (1<<value))>0){
        return false;
    }
    checker |= (1<<value);
  }
  return true;
}


int main()
{
    string str  ;
    cin>>str;

    if(isUniqueChars(str,str.length())){
        cout<<"String is Unique"<<endl;
    }else{
        cout<<"String is  NOT Unique"<<endl;

    }

    return 0;
}