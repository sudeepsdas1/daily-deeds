#include<iostream>
using namespace std;
int numberones(int n){
    int count=0;
    while(n){
        n=n & (n-1);
        count++;
    }
    return count;
}
int main(){
    cout<<numberones(19)<<endl;
    return 0;
}