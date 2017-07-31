#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(void)
{
    int t;
    ll n,c,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
    ll a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    x=a[n-1]-a[0];
   // vector<ll>searchof(n);
    /*for(int i=0;i<=x;i++)
    {
        searchof[i]=i;
    }*/
    ll beg=0;
    ll last=x,pos,cot,last1,maxi=-1;
    ll mid;
    while(last>beg)
    {

        pos=0,cot=0;
        mid=(beg+last)/2;
        //cout<<beg<<" "<<last<<" "<<mid<<endl;
        for(int i=1;i<n;i++)
        {
            if(a[i]-a[pos]>=mid)
            {
                pos=i;
                cot++;
            }
        }
        last1=last;
        if(cot+1>=c)
        {
            beg=mid+1;
            if(mid>maxi)
            maxi = mid;

        }
        else
            last=mid;

    }
   /* ll final=mid;
    if(last1==beg+1)
    {
        //cout<<"hello";
        pos=0;
        cot=0;
       for(int i=1;i<n;i++)
        {
            if(a[i]-a[pos]>=last1)
            {
                pos=i;
                cot++;
            }
        }

    }
    //cout<<last1;
    /if(cot>=c&&last1>mid)
        cout<<last1<<endl;
    else*/
    cout<<maxi<<endl;

    }
    return 0;
}
