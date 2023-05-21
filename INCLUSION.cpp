#include<iostream>
using namespace std;
int divisible(int z,int a,int b){
int c1=z/a;
int c2=z/b;
int c3=z/(a*b);
return c1+c2-c3;
}
int main(){
    int z,a,b;
    cin>>z;
    cin>>a;
    cin>>b;
    cout<<divisible(z,a,b)<<endl;

    return 0;

}