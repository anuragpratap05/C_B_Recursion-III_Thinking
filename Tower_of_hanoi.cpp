# C_B_Recursion-III_Thinking
#include<bits/stdc++.h>
using namespace std;

void tower(int n,char src, char helper, char dest)
{
    if(n==0)
    {
        return;
    }
    
    tower(n-1,src,dest,helper);
    cout<<"shift dist "<<n<<"from"<<src<<"to"<<dest<<endl;
    tower(n-1,helper,src,dest);
}

int main()
{
    int n;
    cin>>n;
    tower(n,'A','B','C');
   

}
