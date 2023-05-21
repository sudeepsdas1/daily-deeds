#include<iostream>
using namespace std;
int gcd(int a,int b){
  while (b!=0)
  {
      int c=a%b;
      a=b;
      b=c;
      

  }
  return a;
  

}
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}