#include<bits/stdc++.h>
using namespace std;
class SinhVien
{
	private:
		string name;
		string classes;
		string date;
		double gpa;
	public:
		void nhap();
		void xuat();
		
};
 void SinhVien :: nhap()
{
	getline(cin,name);
	getline(cin, classes);
	getline(cin, date);
	cin>>gpa;
}
void SinhVien :: xuat()
{
	cout<<"B20DCCN001 ";
	cout<<name <<" ";
	cout<<classes<< " ";
	stringstream ss(date);
	string cmp;
	while( getline(ss,cmp,'/'))
	{
		int n = stoi(cmp);
		if( n < 10)
		{
			cout<<"0"<<n<<"/";
		}
		else
		{
			if(n > 32)
			  cout<<n;
			else
			   cout<<n<<"/";
		}
	}
	cout<<" ";
	cout<<fixed<<setprecision(2)<<gpa;
}
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
