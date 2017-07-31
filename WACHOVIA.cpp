#include<iostream>

using namespace std;
int max(int x,int y)
{
    return((x>y)?x:y);
}
int main(void)
{
    int n,k,m,i,j;
    cin>>n;
    while(n--)
    {
        cin>>k>>m;
        int bagval[m],wt[m],a[m+1][k+1],op=0;
        for(i=0;i<m;i++)
            cin>>wt[i]>>bagval[i];
        for(i=0;i<=k;i++)
            a[0][i]=0;
        for(i=0;i<=m;i++)
            a[i][0]=0;
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=k;j++)
            {
                if(j-wt[i-1]>=0)
                {
                    a[i][j]=max(bagval[i-1]+a[i-1][j-wt[i-1]],a[i-1][j]);
                }
                else
                    a[i][j]=a[i-1][j];
            }
        }
       /* for(i=0;i<=m;i++)
        {
            for(j=0;j<=k;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
        */
        cout<<"Hey stupid robber, you can get "<<a[m][k]<<".\n";
    }
}
