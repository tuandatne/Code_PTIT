#include<bits/stdc++.h>
using namespace std;
class PerSon
{
    private:
        string name,phone;
    public:
        void nhap()
        {
            getline(cin,name);
            getline(cin,phone);
        }
        void xuat()
        {
            cout<<name<<" "<<phone<<endl;
        }
        string getname()
        {
            return name;
        }
        string getPhone()
        {
            return phone;
        }

};
class LaiXe  :public PerSon
{
    private:
        string malx,bac;
        int static dem;
    public:
        friend istream &operator >>(istream &is, LaiXe &a)
        {
            dem++;
            a.malx=to_string(dem);
            getline(is,a.bac);
            return is;
        }
        friend ostream &operator <<(ostream &os, LaiXe a)
        {
            os<<a.getname()<<" "<<a.getPhone()<<" "<<a.malx<<" "<<a.bac<<endl;
            return os;
        }
};
int LaiXe::dem=0;
int main ()
{

}