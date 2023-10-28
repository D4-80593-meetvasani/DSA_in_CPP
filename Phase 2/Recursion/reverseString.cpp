#include<iostream>
using namespace std;

void reverse(int i,int j,string& str){

    //base case
    if(i>j) return;

    swap(str[i],str[j]);
 
    i++;
    j--;

    reverse(i,j,str);

}

int main()
{
    string str;
    cin>>str;

    cout<<endl;
    cout<<"Original String : "<<str<<endl;
    cout<<endl;

    reverse(0,str.length()-1,str);

    cout<<endl;
    cout<<"Reversed String : "<<str<<endl;
    cout<<endl;
    
    return 0;
}