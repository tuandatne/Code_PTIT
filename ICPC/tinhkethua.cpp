#include<bits/stdc++.h>
using namespace std;
class PerSon
{
    private:
        string name,address;
    public:
        string getName()
        {
            return name;
        }
        string getaddress()
        {
            return address;
        }
        void setName(string name)
        {
            this->name=name;
        }
        void setAddress(string address)
        {
            this->address=address;
        }
};
class Student : public PerSon
{
    private:
        double gpa;
        string msv;
    public:
        string getmsv()
        {
            return msv;
        }
        double getgpa()
        {
            return gpa;
        }
        void setmsv(string msv)
        {
            this->msv=msv;
        }
        void setgpa(double gpa)
        {
            this->gpa=gpa;
        }
};
void ct()
{
    Student a;
    a.setAddress("109/7 Nguyen Van Troi Mo Lao Ha Dong Ha Noi");
    a.setName("may be tuan dat");
    a.setgpa(3.69);
    a.setmsv("b21dccn031");
    cout<<a.getaddress()<<" "<<a.getName()<<" "<<a.getmsv()<<" "<<a.getgpa()<<"\n";
}
int main ()
{
    ct();
}