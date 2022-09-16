#include<bits/stdc++.h>
using namespace std;
long long tinhtong(long long n)
{
	long long k,i,tong=1;
	for(i=2; i<=sqrt(n); i++)
	{
		if( n % i == 0)
		{
			k = n / i;
			if( k != i)
			{
				tong=tong+k+i;
			}
			else
			  if( k == i)
			  {
			  
			   tong=tong+k;
	          }
		}
	}
	return tong;
}
int main ()
{
	long long n;
	cin>>n;
	for(long long i=2; i<=n; i++)
	{
		if(tinhtong(i) == i)
		{
			cout<<i<<endl;
		}
	}
}
