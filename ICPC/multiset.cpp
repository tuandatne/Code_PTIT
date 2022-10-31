#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,k,i;
    cin>>n>>k;
    vector<int> a(n);
    for(i=0; i<n; i++)
       cin>>a[i];
    multiset<int> ss;
    for(i=0; i<k; i++)
       ss.insert(a[i]);
    for(i=k; i<n; i++)
    {
        cout<<*ss.rbegin()<<" ";
        ss.erase(ss.find(a[i-k]));
        ss.insert(a[i]);
    }
    cout<<*ss.rbegin()<<endl;
    for(auto it:ss)
    {
        cout<<it<<endl;
    }
}