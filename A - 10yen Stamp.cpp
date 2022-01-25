#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    if(x>y)     cout<<"0\n";
    else{
        if((y-x)%10==0)     cout<<(y-x)/10<<"\n";
        else                cout<<((y-x)/10)+1<<"\n";
    }
    return 0;
}
