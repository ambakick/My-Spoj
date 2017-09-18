#include<bits/stdc++.h>

using namespace std;

string s;
int nicetree(int i)
{
    
    if(s[i]=='l')
        return 1;
    else
    {
        return max(nicetree(++i),nicetree(i))+1;
    }
}

int main(void)

{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cout<<nicetree(0)-1<<endl;
    }
}