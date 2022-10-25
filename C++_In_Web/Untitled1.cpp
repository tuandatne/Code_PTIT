#include<fstream>
#include<string>
using namespace std;
struct SinhVien
{
    string name, masv, lop, sex, date;
};
int main ()
{
    ifstream iff;
    iff.open("cau1.inp", ios::in);
    ofstream off;
    SinhVien sv;
    off.open("cau1.out", ios::out);
    while(!iff.eof())
    {
        iff>>sv.masv;
        off<<sv.masv<<endl;
        getline(iff, sv.name);
          off<<sv.masv<<endl;
        iff>>sv.lop;
        off<<sv.lop<<endl;
        iff>>sv.sex;
        off<<sv.sex<<endl;
        iff>>sv.date;
        off<<sv.date<<endl;
    }
    iff.close();
    off.close();
}
