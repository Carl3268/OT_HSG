#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    long long max2i=__gcd(a,b);
    if(max2i==1) cout<<-1;
    else
    {
        bool flag=0;
        for(int i=2;i<=sqrt(max2i);i++)
        {
            if(max2i%i==0)
            {
                flag=1;
                cout<<max2i/i;
                break;
            }
        }
        if(flag==0)
        {
            cout<<1;
        }
    }
    return 0;
}