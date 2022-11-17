#include<bits/stdc++.h>
using namespace std;
class PhanSo
{
    private:
        int tu,mau;
    public:
        PhanSo();
        ~PhanSo();
        friend istream &operator >>(istream &is, PhanSo &a);
        friend ostream &operator <<(ostream &os, PhanSo a);
         PhanSo  operator + (PhanSo a);
};
istream &operator >>(istream &is, PhanSo &a)
{
    is>>a.tu>>a.mau;
    while(a.mau == 0)
    {
        cout<<"yeu cau nhap lai mau so:\n";
        is>>a.tu>>a.mau;
    }
    return is;
}
PhanSo PhanSo ::operator + (PhanSo p)
{
    PhanSo kq;
    int ucln=gcd(this->mau, p.mau);
    kq.tu= this->tu  * p.mau + this->mau * p.tu;
    kq.tu=kq.tu/ucln;
    kq.mau=this->mau* p.mau ;
    kq.mau=kq.mau/ucln;
    return kq;
} 
ostream &operator <<(ostream &os, PhanSo a)
{
    os<<a.tu<<" / "<<a.mau<<endl;
    return os;
}
PhanSo ::PhanSo()
{
    tu=0;
    mau=1;
}
PhanSo::~PhanSo()
{

}
void ct()
{
    int n,i; cin>>n;
    PhanSo ds[10000],kq;
    for(i=0; i<n; i++)
    {
      cin>>ds[i];
      kq=kq+ds[i];
    }
    cout<<kq<<endl;
}
int main ()
{
    ct();
}