#include<bits/stdc++.h>
using namespace std;
class SinhVien
{
    private:
    string masv,name,   classes,email;

    public:
        SinhVien();
        ~SinhVien();
        void nhap(string );
        void inmh();
        string getmsv()
        {
            return masv;
        }

};
SinhVien::SinhVien()
{
    masv=name=classes=email="";
}
SinhVien::~SinhVien()
{

}
void SinhVien::nhap(string masv)
{
    this->masv=masv;
    cin.ignore();
    getline(cin,name);
    cin>>classes;
    cin>>email;
}
void SinhVien::inmh()
{
        cout<<masv<<" "<<name<<" "<<classes<<" "<<email<<endl;   
}
bool cmp(SinhVien a, SinhVien b)
{
    return a.getmsv() <b.getmsv();
}
int main ()
{
    int i,dem=0;
    SinhVien ds[10000];
    string a="";
    while(a !="\n")
    {
        dem++;
        ds[dem].nhap(a);
    }
    sort(ds,ds+dem, cmp);
    for(i=0; i<dem; i++)
    {
        ds[i].inmh();
    }
}