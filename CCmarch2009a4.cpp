#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
int func(ll n,ll k)
{
    ll a[MAX]={0},i,p=0,d=0;
    a[0]=1;
    while(p<n)
    {
        ll c=0;
        for(i=0;i<=d;i++)
        {
            ll t=a[i]*n+c;
            if(!(t/10))
                {
                    a[i]=t;
                    c=0;
                }
            else
            {
                a[i]=t%10;
                c=t/10;
                if(i==d)
                    d++;
            }
        }
        p++;
    }
    for(i=d;i>=d-k+1;i--)
        cout<<a[i];
    cout<<' ';
    for(i=k-1;i>=0;i--)
        cout<<a[i];
    cout<<'\n';
    return 0;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        func(n,k);
    }
    return 0;
}
