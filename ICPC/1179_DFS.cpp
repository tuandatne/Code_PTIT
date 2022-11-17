#include<bits/stdc++.h>
using namespace std;
bool visited[1001];
int e,v,u;
void dfs(int x,vector<int> tr[1001])
{
    cout<<x<<" ";
    visited[x]=true;
    for(int i : tr[x])
    {
        if(!visited[i])
        {
            dfs(i,tr);
        }
    }
}
void xuli()
{
    
    int x,y;
    int dem1,dem2;
    vector<int> tr[1001];
    cin>>v>>e>>u;

    for(int i=0; i<e; i++)
    {
        cin>>x>>y;
        tr[x].push_back(y);
        tr[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
    dfs(u,tr);
    cout<<endl;
}
void ct()
{
    int t;
    cin>>t;
    while(t--)
    {
        xuli();
    }
}
int main ()
{
    ct();
}