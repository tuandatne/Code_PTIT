#include<bits/stdc++.h>
using namespace std;
string chuanhoa(string s)
{
        s[0]=toupper(s[0]);
        for(int i=1; i<s.length(); i++)
        {
            s[i]=tolower(s[i]);
        }
        return s;
}
void xuli1(string s)
{
    string tmp;
    vector<string> ans;
    stringstream ss(s);
    while(ss >> tmp)
    {
        tmp=chuanhoa(tmp);
        ans.push_back(tmp);
    }
    cout<<ans[ans.size() - 1] <<" ";
    for(int i=0; i<ans.size() - 1; i++)
        cout<<ans[i]  <<" ";
    cout<<endl;
}
void xuli2(string s)
{

    string tmp;
    vector<string> ans;
    stringstream ss(s);
    while(ss >> tmp)
    {
        tmp=chuanhoa(tmp);
        ans.push_back(tmp);
    }
    for(int i=1; i<ans.size(); i++)
        cout<<ans[i]  <<" ";
    cout<<ans[0] <<endl;
}
void ct()
{
    int t; cin>>t;
    int index;
    string s;
    while(t--)
    {
        cin>>index;
        cin.ignore();
        getline(cin,s);
        if(index == 1)
         xuli1(s);
        else
          xuli2(s);
    }
}
int main ()
{
    ct();
}