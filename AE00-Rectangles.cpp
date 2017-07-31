#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(void)
{
    int t,i=2;
    cin>>t;
    ll count=t;
    while((t/i)-i+1>0)
    {
        count+=(t/i)-i+1;
        //cout<<count<<endl;
        i++;
    }
    cout<<count;
}
