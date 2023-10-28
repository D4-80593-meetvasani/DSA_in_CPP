#include<iostream>
using namespace std;

char toLowerCase(char name){
    if(name>='a' && name<='z'){
        return name;
    }else{
        char temp = name - 'A' + 'a';
        return temp;
    }
}


bool checkPanlindrome(char name[],int n){
    int s=0;
    int e = n-1;

    while(s<=e){
        if (toLowerCase( name[s])!= toLowerCase (name[e]))
        {
            /* code */
        return false;
        }
        else {
            s++;
            e--;
        }
    }
    return true;
}


void reverse(char name[],int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
}


int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}


int main()
{
    char name[20];

    cout<<"Enter your name : ";
    cin>>name;
    
    cout<<"Your name is : "<<name<<endl;

    int len = getLength(name);
    cout<<"Length : "<<len<<endl;
    
    reverse(name,len);
     cout<<"Your reversed name is : "<<name<<endl;

    checkPanlindrome(name,len);

    if (checkPanlindrome(name,len))
    {
        cout<<"name is palindrome"<<endl;
    }
    else{

    cout<<"name is not a palindrome"<<endl;
    }

   
}