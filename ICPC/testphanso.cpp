#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    long long du=0;
    while(b != 0)
    {
        du=a%b;
        a=b;
        b=du;
    }
    return a;
}
long long lcm(long long a, long long b)
{
    long long bcnn=a*b/gcd(a,b);
    return bcnn;
}
class PhanSo
{
    private:
        long long tu,mau;
    public:
        PhanSo(int tu, int mau)
        {
            this->tu=tu;
            this->mau=mau;
        }
        friend istream &operator >>(istream &is, PhanSo &a)
        {
            is>>a.tu>>a.mau;
            return is;
        }
        friend ostream &operator <<(ostream &os, PhanSo a)
        {
            cout<<a.tu<<"/"<<a.mau<<endl;
            return os;
        }
        PhanSo operator +(PhanSo);
        void rutgon()
        {
            long long  ucln=gcd(tu,mau);
            tu=tu/ucln;
            mau=mau/ucln;
        }
};
PhanSo PhanSo::operator+(PhanSo a)
{
    long long  bcnn=lcm(a.mau, this->mau);
    a.tu=a.tu*( bcnn /a.mau )+this->tu*(bcnn / this->mau);
    a.mau=bcnn;
    a.rutgon();
    return a;
}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}