#include <bits/stdc++.h>
using namespace std;
void qs(long long  a[], long long  b[], long long l, long long  r)
{
		long i=l, j=r, x=a[(l+r)/2], y=b[(l+r)/2];
		while (i<=j)
		{
				while ((a[i] < x) || (a[i]==x && b[i]<y)) i++;
				while ((a[j] > x) || (a[j]==x && b[j]>y)) j--;
				if (i<=j)
				{
					long temp=a[i];      a[i]=a[j];      a[j]=temp;
					     temp=b[i];      b[i]=b[j];      b[j]=temp;
					i++;
					j--;
				}
		}
		if (i<r) qs(a,b,i,r);
		if (j>l) qs(a,b,l,j);
}
int main()
{
	int t,n,i,j;
	cin>>t;
	long long  a[100000],b[100000];
	while(t--)
	{
		cin>>n;
		long long dem=0;
		for( i=1; i<=n; i++)
		 for( j=1; j<=n; j++)
		  {
				dem++;
				cin>>a[dem];
				b[dem]=i;
		 }
		qs(a,b,1,dem);
		dem++;
		a[dem]=INT_MIN;
		int dem1=1,dem2=0;
	    for( i=1; i<dem; i++)
	    {
		   if(a[i] == a[i+1])
		   {
		   	if( b[i] != b[i+1])
		   		dem1++;
		   }
		   else
		   {
		   	 if(dem1 == n)
		   	   dem2++;
		   	 dem1=1;
		   }
     	}
     	cout<<dem2<<endl;
//for(i=1; i<=dem; i++)
//  cout<<a[i] <<" "<<b[i]	<<endl;
    }
}
