#include<iostream>

using namespace std;

int main(void)
{
    int n,a[3];
    cin>>n;
    while(n--)
    {
        int money,i,j;
        cin>>money;
        int arr[money+1];
        a[0]=money/2;
        a[1]=money/3;
        a[2]=money/4;
        for(i=0;i<=3;i++)
            arr[i][0]=0;
        for(i=0;i<=money;i++)
            arr[0][i]=0;
            for(j=1;j<=money;j++)
            {
                if(j-1>=0)
                {
                    arr[i]=max(a[i-1]+arr[j-1],arr[j]);
                }
                else
                    arr[i][j]=arr[i-1][j];
            }

        cout<<arr[3][money]<<"\n";
    }
}
