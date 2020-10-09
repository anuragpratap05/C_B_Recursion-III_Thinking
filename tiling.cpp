# C_B_Recursion-III_Thinking
#include<bits/stdc++.h>
using namespace std;

int wall(int n)
{
    if(n<=3)
    {
        return 1;
    }
    
    int sa=wall(n-1)+wall(n-4);
    return sa;
}

int main()
{
    int n;
    cin>>n;
    int c=wall(n);
    cout<<c<<endl;
  
  
    
}
