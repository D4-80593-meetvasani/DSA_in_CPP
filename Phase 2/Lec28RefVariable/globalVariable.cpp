#include<iostream>
using namespace std;

int score = 15;
void a(int& i){
    // cout<<i<<endl;
    // b(i);
 
    cout<<"Score in a "<<score<<endl;
}

void b(int& i){
    // cout<<i<<endl;
   
    cout<<"Score in b "<<score<<endl;
}

int main()
{
    
 
    int i=5;
    a(i);
    b(i);
    cout<<"Score in main "<<score<<endl;
    return 0;
}