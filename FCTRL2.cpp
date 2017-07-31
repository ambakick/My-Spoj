#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(void)

{
    double t,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        b=1;
        for(int i=1;i<=n;i++)
        {
            b=b*i;
        }
        cout<<b<<endl;
    }
}
