#include<bits/stdc++.h>
using namespace std;
void ct()
{
    int n,i,a[100000],b[100000]; cin>>n;
    for(i=0; i<n; i++)
       cin>>a[i];
    for(i=0; i<n; i++)
       cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    int j=1;
    i=1;
    long long  ans=abs(a[0] + b[0]) ;
    while(i<n && j<n)
    {
        if( abs(a[i] + b[j])  < ans )
        {
            ans=a[i]+b[j];
            if(abs(a[i]) > abs(a[j]) )
                 j++;
            else
                i++;
        }
    }
    cout<<ans<<endl;
}
int main ()
{
    ct();
}