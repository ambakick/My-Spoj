#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[200009];
ll ans=0;
void merge(ll left_beg,ll left_end,ll right_beg,ll right_end)
{
    ll pos=0;
    ll pp=left_beg;
    ll temp[right_end-left_beg+2];
    while(left_beg<=left_end&&right_beg<=right_end)
    {
        if(arr[left_beg]<arr[right_beg])
        {
            temp[pos++]=arr[left_beg++];
        }
        else
           {
               temp[pos++]=arr[right_beg++];
               ans+=(left_end-left_beg+1);
           }
    }
    while(left_beg<=left_end)
        temp[pos++]=arr[left_beg++];
    while(right_beg<=right_end)
        temp[pos++]=arr[right_beg++];
    for(ll i=0;i<pos;i++)
        arr[pp+i]=temp[i];
    return;
}
void mergeSort(ll l,ll r)
{
    if(l<r)
    {
        ll mid=l+(r-l)/2;
        mergeSort(l,mid);
        mergeSort(mid+1,r);
        merge(l,mid,mid+1,r);
    }
}
int main(void)
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        mergeSort(0,n-1);
        /*for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";*/
        cout<<ans<<endl;
    }

}
