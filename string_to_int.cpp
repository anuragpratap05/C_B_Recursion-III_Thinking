# C_B_Recursion-III_Thinking
#include<bits/stdc++.h>
using namespace std;

int toint(string s,int l)
{
    if(l==0)
    {
        return 0;
    }
    
    int last=s[l-1]-'0';
    int sa=toint(s,l-1);
    return sa*10+last;
}

int main()
{
  
     string s;
     cin>>s;
     int l=s.length();
     int c=toint(s,l);
     cout<<c<<endl;
     cout<<c+1<<endl;
}
