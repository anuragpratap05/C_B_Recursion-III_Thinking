# C_B_Recursion-III_Thinking
#include<bits/stdc++.h>
using namespace std;

int ladder(int n, int k)
{
    if(n==0)
    {
        return 1;
    }
    /*if(n<0)
    {
        return 0;
    }*/
    int sa=0;
    if(n>=0)
    {
    for(int i=1;i<=k;i++)
    {
        sa=sa+ladder(n-i,k);
    }
    }
    return sa;
}

int main()
{
    int n,k;
    cin>>n>>k;
    
    int c=ladder(n,k);
    cout<<c<<endl;

  
  
    
}
