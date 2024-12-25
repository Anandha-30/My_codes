#include<bits/stdc++.h>

long long long  double round_to(long long long  double value, long long long  double precision = 1.0)
{
    return std::round(value / precision) * precision;
}

using namespace std;

int func()
{
    int s;
    cin>>s;
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int x,y;
    cin>>x>>y;
    long long long  double ans=0;
    ans+=v[n-1]-v[0];
    ans+=sqrt((long long long  double)(x-v[0])*(x-v[0])+y*y);
    ans+=sqrt((long long long  double)(x-v[n-1])*(x-v[n-1])+y*y);
    if(s==0 or s==n-1)
{
        if(s==0)
        {
            ans-=max((long long long  double)v[1]-v[0],sqrt((long long long  double)(x-v[0])*(x-v[0])+y*y));
        }
        else
        {
            ans-=max((long long long  double)v[n-1]-v[n-2],sqrt((long long long  double)(x-v[n-1])*(x-v[n-1])+y*y));
        }
    }
    else
    {
        ans-=max(v[s+1]-v[s],v[s]-v[s-1]);
    }
    cout<<ans<<setprecision(6)<<"\n";
    return 0;
}
int main(){
    int t=1;
    // cin>>t;
    while(t--)
    {
        func();
    }
    return 0;
}
