#include<bits/stdc++.h>
using namespace std;
const int N=505;
string s[N];
bool vis[N][N];

void ac(){
//    cout<<sizeof(s)/sizeof(s[0])<<endl;
    int n,m;    cin>>n>>m;
    for(int i=0; i<n; ++i)  cin>>s[i];
    int x=0,y=0;    //initially i am in 0,0 position
    vis[x][y]=1;
    while(1){
        int dx = x, dy = y;      //two temp variable to update the position
        if(s[x][y]=='U')    dx--;
        else if(s[x][y]=='D')   dx++;
        else if(s[x][y]=='L')   dy--;
        else    dy++;

        if(dx>=0 && dx<n && dy>=0 && dy<m){
            if(vis[dx][dy]){
                cout<<"-1\n";
                return;
            }
            vis[dx][dy]=1;
            x=dx, y=dy;     //Finally i am in position x,y
        }
        else    break;
    }
    cout<<x+1<<" "<<y+1<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ac();

    return 0;
}
