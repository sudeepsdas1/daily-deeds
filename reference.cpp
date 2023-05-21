#include<iostream>
using namespace std;
void update1(int n){
    n++;
}
void update2(int &n){
    n++;

}
int main(){
    // int a=45;
    // int& b=a;
    // b++;
    // cout<<b<<endl;
    int n=3;
    update1(n);
    cout<<n<<endl;
    update2(n);
    cout<<n<<endl;
return 0;
}