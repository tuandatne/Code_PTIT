#include<bits/stdc++.h>
using namespace std;
int a[100],isfinal,n;
void khoitao()
{
    for(int i=1; i<=n; i++)
    {
        a[i]=0;
    }
}
void sinhxaunhiphan()
{
    int i=n;
    while(i>=1 && a[i] == 1)
    {
        i--;
        a[i]=0;
    }
    if(i == 0)
    {
        isfinal=0;
    }
    else
       a[i]=1;
}
void ct()
{
    cin>>n;
    isfinal=1;
    while(isfinal)
    {
        for(int i=1; i<=n; i++)
           cout<<a[i];
        sinhxaunhiphan();
    }
}
int main ()
{
    ct();
}