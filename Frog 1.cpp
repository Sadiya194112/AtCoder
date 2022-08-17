#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5+5;
int h[N];
int dp[N];

int func(int n){
    int cost=INT_MAX;
    if(dp[n]!=-1)   return dp[n];
    if(n==0)    return 0;

    //way 1
    cost = min(cost, func(n-1)+abs(h[n]-h[n-1]));
    //way 2
    if(n>=2)    cost = min(cost, func(n-2)+abs(h[n]-h[n-2]));
    return dp[n]=cost;
}
int main(){
    memset(dp, -1, sizeof(dp));
    int n;  cin>>n;

    for(int i=0; i<n; ++i)  cin>>h[i];
    cout<<func(n-1)<<"\n";

    return 0;
}
