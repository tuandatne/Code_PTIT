#include<bits/stdc++.h>
using namespace std;
void xuli(long long n, long long p)
{
	long long i;
	int dem=0;
	for(i=2; i<=n; i++)
	{
		long long k=i;
		while( k % p == 0)
		{
			dem++;
			k = k / p;
		}
	}
	cout<<dem<<endl;
}
void ct()
{
	int t;
	cin>>t;
	long long n,p;
	while(t--)
	{
		cin>>n>>p;
		xuli(n,p);
	}
}
int main ()
{
	ct();
}
