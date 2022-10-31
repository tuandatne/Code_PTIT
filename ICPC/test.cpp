#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<long, long> a, pair<long, long> b)
{

    bool check;
    if(a.second < b.second) check = false;
    else if(a.second > b.second) check = true;
    else 
    {
        if(a.first > b.first) check = true;
        else check = false;
    }
    return !check;
}
int main()
{
    long test;
    cin >> test;
    while(test--)
    {
        long n;
        cin >> n;
        vector<pair <long, long>> a(n);
        for(long i = 0; i < n;i++)
        {
            cin>>a[i].first>>a[i].second;
        }
        sort(a.begin(), a.end(), cmp);
        long kq = 0;
        while(!a.empty())
        {
            long maxFirst, maxSecond;
            maxFirst = a[0].first;
            maxSecond = a[0].second;
            
            for(long unsigned int i = 1; i < a.size();i++)
            {
                if(a[i].first >= maxFirst && a[i].second >= maxSecond )
                {
                    maxFirst = a[i].first;
                    maxSecond = a[i].second;
                    a.erase(a.begin()+i);
                    i--;
                   
                }
            }
            
            a.erase(a.begin());
            
            kq ++;
        }
        cout << kq << endl;
    }
    return 0;
}