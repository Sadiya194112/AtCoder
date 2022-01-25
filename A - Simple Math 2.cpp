#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll ModPower(ll base, ll power, ll modulo){
    ll ans = 1;
    while(power){
        if(power & 1){
            ans = (ans*base)%modulo;
        }
        base = (base*base)%modulo;
        power = power>>1;
   }
   return ans;
}
int main(){
    ll n,m;
    cin>>n>>m;
    cout<<ModPower(10, n, m*m)/m<<"\n";
    return 0;
}
