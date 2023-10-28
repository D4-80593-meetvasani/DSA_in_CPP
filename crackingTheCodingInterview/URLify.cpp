#include<iostream>
using namespace std;

string replaceSpaces(string &str){

    for(int i = 0;i<str.length();i++){
        if(str[i]==' '){
            str = str.substr(0,i)+"%20"+str.substr(i+1,str.length());
        }
    }

    return str;
}


int main()
{
    string str = "Mr John Smith is CEO of MLH";
    cout<<replaceSpaces(str)<<endl;
    return 0;
}