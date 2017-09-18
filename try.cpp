#include<iostream>
#include<map>
using namespace std;
   map<int,long long>dp;
int main()
{
long long int n,i;
    while(cin>>n)
    {
        if(n<12)
        {
            cout<<n<<"\n";
        }
        else
        {

        dp[0]=0;
        for(i=1;i<=n;i++)
        {
            dp[i]=max(i,dp[i/2]+dp[i/3]+dp[i/4]);
        }
        cout<<dp[n]<<"\n";
        }

    }
}
