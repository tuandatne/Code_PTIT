#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	int a[n];
	int b[n];
	for(int i = 0; i< n; i++)
	{
		cin >> a[i];
	}
	
	int res = 1;
	int test = 0;
	
	for(int i = n-1; i >= 0; i--)
	{
		
		if(a[i] == 0)
		{
			b[i] = 0;
		}
		else 
		{
			test = 1;
			b[i] = res;
			if(a[i] < a[i-1] && i > 0)
			{
				res++;
			}
		}
	}
	if(res != x && test == 1)
		cout << "ambiguous";
	else
	{
		for(int i = 0; i < n; i++)
		{
			cout << b[i] << endl;
		}
	}
}
