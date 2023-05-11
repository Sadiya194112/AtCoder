#include<bits/stdc++.h>
using namespace std;
void ac(){
    int n,gc=0,i;  cin>>n;
    int a[n+2],pre[n],suf[n];
    for(i=0; i<n; i++){
        cin>>a[i];
        gc = __gcd(gc, a[i]);
        pre[i] = gc;
    }
    gc=0;
    for(i=n-1; i>=0; i--){
        gc = __gcd(gc, a[i]);
        suf[i] = gc;
    }
    int m,ans;
    ans = LLONG_MIN;
    for(i=1; i+1<n; i++){
        m = __gcd(pre[i-1],suf[i+1]);
        ans = max(ans, m);
    }
    ans = max(ans, suf[1]);
    ans = max(ans, pre[n-2]);
    cout<<ans<<endl;
}
signed main(){
    ac();
    return 0;
}
