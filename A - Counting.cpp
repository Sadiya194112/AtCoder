#include<iostream>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  if(b<a)	cout<<"0\n";
  else cout<<abs(b-a+1)<<"\n";
return 0;
}
