#include<iostream>
#include<queue>
using namespace std;

int main()
{

    queue<int> q;

    q.push(11);

    cout<<"Front of queue is "<<q.front()<<endl;

    q.push(15);
    cout<<"Front of queue is "<<q.front()<<endl;

    q.push(13);
    cout<<"Front of queue is "<<q.front()<<endl;

    cout<<"Size of queue is "<<q.size()<<endl;

    q.pop();
    cout<<"Front of queue is "<<q.front()<<endl;
    q.pop();
    q.pop();

    cout<<"Size of queue is "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Empty"<<endl;
    }else
        cout<<"Not Empty"<<endl;
    return 0;
}