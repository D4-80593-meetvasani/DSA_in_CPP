#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("Meet");
    q.push("Jigneshbhai");
    q.push("Vasani");
    cout<<"Size before pop"<<q.size()<<endl;

    cout<<"First Element "<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;

    cout<<"Size after pop"<<q.size()<<endl;
}