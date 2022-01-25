#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> ar[100];
    int i,j,n,x1,x2,y1,y2;
    double D=0,Distance;
    cin>>n;
    for(i=0; i<n; i++)  cin>>ar[i].first>>ar[i].second;
//    cout<<endl;

//    for(i=0; i<n; i++)  cout<<ar[i].first<<" "<<ar[i].second<<endl;
//    cout<<endl;
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            x1 = ar[i].first; y1 = ar[i].second;
            x2 = ar[j].first; y2 = ar[j].second;

            Distance = sqrt((abs(x1-x2)*abs(x1-x2))+(abs(y1-y2)*abs(y1-y2)));
            if(Distance>D){
                D = Distance;
            }
        }
    }
    cout<<fixed<<setprecision(10)<<D<<"\n";

    return 0;
}
