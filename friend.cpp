# C_B_Recursion-III_Thinking
#include<bits/stdc++.h>
using namespace std;

int frien(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }
    
    int sa=frien(n-1)+(n-1)*frien(n-2);
    
    return sa;
}

int main()
{
    int n;
    cin>>n;
    
    int c=frien(n);
    cout<<c<<endl;
    

  
  
    
}
