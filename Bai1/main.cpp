#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string kq;
    long long sum=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0' and s[i]<='9') sum+=s[i]-'0';
        else kq+=s[i];
    }
    reverse(kq.begin(), kq.end());
    if(kq.size()==0) cout<<sum<<endl<<-1;
    else
    {
        cout<<sum<<endl<<kq;
    }
    return 0;
}