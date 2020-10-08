#include<bits/stdc++.h>
using namespace std;

char op[][9]={"zero", "one","two","three","four","five","six","seven","eight","nine" };

void spellings(int n)
{
    if(n==0)
    {
        return;
    }
    //int x=n%10;
    //cout<<op[x]<<" ";
    spellings(n/10);
    int x=n%10;
    cout<<op[x]<<" ";
}

int main()
{
    int n;
    cin>>n;
    spellings(n);
  
}
