#include<bits/stdc++.h>

using namespace std;
long long int max(long long int x,long long int y)
{
    return ((x>y)?x:y);
}
long long int a[100000];
long long int calc(long long int n)
{
    if(n==0)
        return 0;
    else if(n>100000)
      return max(n,calc(n/2)+calc(n/3)+calc(n/4));

    else
    {
        if(a[n]==-1)
        {
          a[n]=max(n,calc(n/2)+calc(n/3)+calc(n/4));
        return a[n];
        }
        else
            return a[n];
        }

    }

int main(void)
{
    long long int n;
    while(cin>>n)
    {
        memset(a,-1,sizeof(a));
        /*for(int i=0;i<=n;i++)
            cout<<a[n]<<" ";*/
        cout<<calc(n)<<"\n";
       /*for(int i=0;i<=n;i++)
           cout<<a[i]<<" ";
           */
    }
    return 0;
}
