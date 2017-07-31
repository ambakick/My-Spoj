#include<iostream>
using namespace std;
int max(int x,int y)
{
    return ((x>y)?x:y);
}
int main(void)

{
    int w,n,i,j;
    cin>>w>>n;
    int weight[n],qty[n],we[n+1][w+1];
    for(i=0;i<n;i++)
    {
        cin>>qty[i]>>weight[i];
    }
    for(i=0;i<=w;i++)
        we[0][i]=0;
    for(i=0;i<=n;i++)
        we[i][0]=0;
    for(i=1;i<=n;i++)
    {
        int x=qty[i-1];
        for(j=1;j<=w;j++)
        {
            if(j-x>=0)
            {
                we[i][j]=max(weight[i-1]+we[i-1][j-x],we[i-1][j]);
            }
            else
            {
                we[i][j]=we[i-1][j];
            }
        }
    }
    cout<<we[n][w];

}
