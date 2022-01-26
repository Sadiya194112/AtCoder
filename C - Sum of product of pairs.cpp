#include<bits/stdc++.h>
#define ll long long int
const int M = 1e9+7;
using namespace std;
int main(){
    ll n,i;
    cin>>n;
    ll ar[n];
    for(i=0; i<n; i++)  cin>>ar[i];

    ll suffixSum=0, ans=0;

    for(i=n-1; i>=0; i--){
        ans = ans + (ar[i]*suffixSum);
        suffixSum += ar[i];
        ans%=M;
        suffixSum%=M;
    }
    cout<<ans<<"\n";
    return 0;
}
