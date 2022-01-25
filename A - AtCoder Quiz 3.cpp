#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<10)    cout<<"AGC00"<<n<<"\n";
    else if(n>=10 && n<=41) cout<<"AGC0"<<n<<"\n";
    else    cout<<"AGC0"<<n+1<<"\n";
    return 0;
}
