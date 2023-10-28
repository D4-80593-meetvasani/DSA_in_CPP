#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("Meet");
    s.push("JigneshBhai");
    s.push("Vasani");

    cout<<"Top Element -> " <<s.top()<<endl;

    s.pop();
    cout<<"Top Element -> "<<s.top()<<endl;

    cout<<"Size of stack -> "<<s.size()<<endl;
    cout<<"Empty or Not  -> "<<s.empty()<<endl;
}