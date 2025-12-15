#include <bits/stdc++.h>
using namespace std;
const int m=1000005;
int sang[m];
void sanguoc()
{
    for(int i=1;i<m;i++)
    {
        for (int j=i;j<m;j+=i)
        {
            sang[j]++;
        }
    }
}
int main()
{
    sanguoc();
    int n;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int kq=-1;
        for(int j=i+1;j<n;j++)
        {
            if (sang[a[j]]>sang[a[i]])
            {
                kq=a[j];
                break;
            }
        }
        cout<<kq<<" ";
    }
    return 0;
}
