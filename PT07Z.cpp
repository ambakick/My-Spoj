#include<bits/stdc++.h>

using namespace std;
vector<int>adj[100000];
int arr[100000]={0};
int arr2[100000]={0};
void dfs(int s,int count)
{
    //cout<<"hi"<<endl;
    arr[s]=count;
    for(int i=0;i<adj[s].size();i++)
    {
        if(arr[adj[s][i]]==0)
            dfs(adj[s][i],count+1);
    }
}
void dfs1(int s,int count)
{
    arr2[s]=count;
    for(int i=0;i<adj[s].size();i++)
    {
        if(arr2[adj[s][i]]==0)
            dfs(adj[s][i],count+1);
    }
}
int main(void)
{
    int n,u,v;
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //cout<<"hi";
    int count=1;
    dfs(1,count);
    int max=0,pos=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            pos=i;
        }
    }
    count=1;
    //cout<<max<<pos<<endl;
    //cout<<pos;
    memset (arr,0,sizeof(arr));

    count=1;
    dfs(pos,count);
    //dfs1(pos,count);
    max=0;

    for(int i=1;i<=n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    cout<<max-1;
}
