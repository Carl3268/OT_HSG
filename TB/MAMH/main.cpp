#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    long long maxi=INT_MIN;
    long long kq=0;
    bool flag=0;
    for (int i=0;i<s.size();i++)
    {
        if (s[i]>='0' and s[i]<='9')
        {
            kq=kq*10+(s[i]-'0');
            flag=1;
        }
        else
        {
            if (flag==1)
            {
                if(kq>maxi) maxi=kq;
                kq=0;
                flag=0;
            }
        }
    }
    if (flag==1)
    {
        if(kq>maxi) maxi=kq;
    }
    cout<<maxi;
    return 0;
}
