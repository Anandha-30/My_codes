#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<long long int> a;
long long int low=0, mid, high, n, i, x;
cin>>n;
for(i=0;i<n;i++)
{
cin>>x;
a.push_back(x);
}
high=n-1;
while(low<=high)
{
if(low==high)
cout<<a[high];
mid=(low+high)/2;
if(((a[mid]>a[mid-1])&&(a[mid]>a[mid+1])))
{
cout<<a[mid]<<" ";
break;
}
else
if(a[mid]<a[mid+1])
low=mid+1;
else
high=mid-1;
}
return 0;
}