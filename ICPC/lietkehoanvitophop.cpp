#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[1000];
void in()
{
    for(int i=1; i<=k; i++)
       cout<<a[i];
    cout<<" ";
}
void sinh(int i)
{
    for(int j=a[i-1]+1; j<=n-k+i; j++)
    {
            a[i]=j;
            if(i==k)
              in();
            else
               sinh(i+1);
        
    }
}
void xuli()
{
    sinh(1);
    cout<<endl;
}
void ct()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>k;
        xuli();
    }
}
int main ()
{
    ct();
}