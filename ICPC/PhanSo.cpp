#include<bits/stdc++.h>
using namespace std;
class PhanSo
{
    private:
        int tu,mau;
    public:
        friend istream &operator >>(istream &is, PhanSo &a)
        {
            is>>a.tu>>a.mau;
            return is;
        }
        friend ostream &operator <<(ostream &os, PhanSo a)
        {
            os<<a.tu<<" / "<<a.mau<<endl;
            return os;
        }
        PhanSo operator + (PhanSo);
};  
PhanSo PhanSo::operator+(PhanSo a)
{
    PhanSo ans;
    ans.tu=a.tu*this->mau+this->tu*a.mau;
    ans.mau=a.mau*this->mau;
    return ans;
}
void ct()
{
    PhanSo a,b;
    cin>>a>>b;
    cout<<a+b<<endl;
}
int main ()
{
    ct();
}