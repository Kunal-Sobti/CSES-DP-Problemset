#define ll long long
#define vi vector<int>
#define fi for(int i=0;i<n;i++)
#include<bits/stdc++.h>
const int mod=1000000007;
using namespace std;
ll solve(vector<int>&a,int &n,int &x){
    vector<int>dp(x+1,1e7);
    dp[0]=0;
    for(int i=1;i<=x;i++){
        for(int j=0;j<n;j++){
            if(a[j]>i)continue;
            dp[i]=min(dp[i],dp[i-a[j]]+1);
        }
    }
    return dp[x]==1e7?-1:dp[x];
}
int main(){
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<solve(a,n,x)%mod<<endl;
    return 0;
}