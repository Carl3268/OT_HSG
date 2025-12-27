#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string kq;
    string tam="";
    long long digit=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' and s[i]<='z')
        {
            tam+=s[i];
        }
        else
        {
            if(digit==2)
            {
                reverse(tam.begin(), tam.end());
            }
            if(tam!="")
            {
                kq+=tam;
                kq+=" ";
                tam="";
            }
            digit=s[i]-'0';
        }
    }
    if(tam!="")
    {
        if(digit==2)
        {
            reverse(tam.begin(), tam.end());
        }
        kq+=tam;
    }
    cout<<kq;
    return 0;
}