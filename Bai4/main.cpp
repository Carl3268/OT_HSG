#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    while(q--)
    {
        long long x;
        cin>>x;
        long long pos=0;
        if(x==0)
        {
            for(int i=0;i<s.size();i++)
            {
                if(s[i]>s[pos]) pos=i;
            }
        }
        else if(x==1)
        {
            for(int i=0;i<s.size();i++)
            {
                if(s[i]<s[pos]) pos=i;
            }
        }
        s.erase(pos, 1);
    }
    cout<<s;
    return 0;
}