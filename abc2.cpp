#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long ans=0;
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1])    ans++;
        }
        cout<<ans<<"\n";
        long long cnt=n-ans-1;
        cnt*=ans;
        long long k=ans;
        long long sum=0;
        while(k--){
            sum+=k;
        }
        cout<<sum<<"\n";
        long long an=cnt+sum;
        cout<<an<<endl;
    }
}