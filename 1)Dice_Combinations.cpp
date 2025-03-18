#define ll long long
#define vi vector<int>
#define fi for(int i=0;i<n;i++)
#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
int main(){
    ll n;
    cin>>n;
    vector<ll>dp(n+1,0);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(j>i)break;
            dp[i]+=dp[i-j];
        }
        if(i<=6)dp[i]++;
        dp[i]=dp[i]%mod;
    }
    cout<<dp[n]<<endl;
    return 0;
}