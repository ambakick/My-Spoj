#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int t,i,j,k,n;
    while(cin>>n)
    {
        int d[n+1][n+1],a[n+1][n+1];
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=n;j++)
                {a[i][j]=0;
                d[i][j]=0;
                }
        }

        for(j=1;j<=n;j++)
            cin>>d[j][j];

        for(i=n-1;i>0;i--)
        {
            for(j=i+1;j<=n;j++)
            {
                int tmp=INT_MAX,x,tmp1=INT_MAX;
                for(k=i;k<j;k++)
                {
                    x=a[i][k]+a[k+1][j]+(d[i][k]*d[k+1][j]);
                    if(tmp>x)
                       {
                           tmp=x;
                           tmp1=(d[i][k]+d[k+1][j])%100;
                       }
                }
                a[i][j]=tmp;
                d[i][j]=tmp1;
            }
        }
       /* for(i=0;i<=n;i++)
        {
            for(j=0;j<=n;j++)
                cout<<a[i][j]<<" ";
            cout<<"\n";
        }
        for(i=0;i<=n;i++)
        {
             for(j=0;j<=n;j++)
                cout<<d[i][j]<<" ";
            cout<<"\n";
        }*/
        cout<<a[1][n]<<"\n";
    }
}
