#include<bits/stdc++.h>

using namespace std;
int visited[10002]={0};
//memset(visited,0,sizeof(visited));
vector<int>adj[10002];
//int count =0;
void dfs(int s,int count)
{
    visited[s]=count;
    for(int i=0;i<adj[s].size();i++)
    {
        if(visited[adj[s][i]]==0)
        dfs(adj[s][i],count+1);
    }
}
int main(void)
{
    int n,x,u,v,count=1;


    //memset(visited,0,sizeof(visited));
    cin>>n;
    x=n-1;
    while(x--)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        //adj[v].push_back(u);
    }
    dfs(1,count);
    int max=0,pos=0;
    for(int i=0;i<n;i++)
    {
        if(visited[i]>max)
          {
             max=visited[i];
             pos=i;
          }
    }
    int second=0;

     memset(visited,0,sizeof(visited));
      count=0;
     dfs(pos,count);
    //cout<<max+second;
     for(int i=0;i<n;i++)
    {
        if(visited[i]>second)
          {
             second=visited[i];
             pos=i;
          }
    }
    if(second>max)
        cout<<second;
    else
        cout<<max;
}
