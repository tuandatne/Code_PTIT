#include<bits/stdc++.h>
using namespace std;
bool check(char ch)
{
    if(ch >='0' && ch<='9')
       return true;
    return false;
}
void ct()
{
    string s;
    cin>>s;
    multiset<char> ss;
    multiset<char> ss1;
    for(char x :s)
    {
        if(!check(x))
           ss.insert(x);
        else
          ss1.insert(x);
    }
    for(char ch: ss)
      cout<<ch;
    for(char ch: ss1)
      cout<<ch;
    cout<<endl;
}
int main()
{
    ct();
}