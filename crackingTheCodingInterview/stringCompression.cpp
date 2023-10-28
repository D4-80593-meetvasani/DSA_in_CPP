#include<iostream>
#include<vector> 
using namespace std;

int main()
{
    string chars ;
    cin>>chars;
    

        int i=0;
        int ansIndex = 0;
        int n = chars.length();
        
        while(i<n)
        {
            int j = i+1;
            while(j<n && chars[i]==chars[j])
            {
                j++;
            }
            
            chars[ansIndex++]=chars[i];
            int count = j-i;
            
            if(count>1){
                string cnt = to_string(count);
                for(char ch:cnt)
                {
                    chars[ansIndex++]=ch;
                }
            }
            
            i=j;
            // n = ansIndex;
        }
        chars.resize(ansIndex);
           
        
    cout<<chars<<endl;
   
}
