#include<bits/stdc++.h>
using namespace std;
#define Nmax 1000
bool snt(long long  n)
{
	if( n < 2)
	  return false;
	for(int i=2; i<=sqrt(n); i++)
	{
		if( n % i == 0)
		  return false;
	}
	return true;
}

void sangnt(int a[])
{
	a[1]=1;
	for(int i=2; i<=sqrt(Nmax); i++)
	{
		if( a[i] == 0)
		{
		  for(int j=2; j <= Nmax / i; j++)
		  {
			  a[i*j]=1;	
		  }
	    }
	}
}
int tongcs(int n)
{
	int tong=0;
	while( n != 0)
	{
		tong=tong + n % 10;
		n = n / 10;	
	}
	return tong;
}

void xuli(int n, int a[])
{
	
	if( snt(n) )
	{
		cout<<"NO\n";
	}
	else
	{
		int k=n,i=2,tong=0;
		while(i <=  n)
		{
			if( (a[i] == 0 ) && (n % i == 0) ) 
			{
				while(n % i == 0)
				{
					tong = tong + tongcs(i);
					n = n / i;
				}
				if( a[n] == 0)
				{
					tong = tong + tongcs(n);
					break;
				}
			}
			i++;
		}
		if( tong == tongcs(k))
			cout<<"YES\n";
		else
		  cout<<"NO\n";
	}
}
void ct()
{
	int t;
	int a[Nmax]={0};
	sangnt(a);
	int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		xuli(n,a);
	}
}
int main ()
{
	ct();
}
