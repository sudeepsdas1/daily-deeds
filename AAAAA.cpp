#include <iostream>
using namespace std;

int main() {

    int x;
    cin>>x;
    if(0<x&&x<=100){
        cout << x << endl;
    }
    if(100< x && x <=1000){
        
        cout<< x-25<<endl;
        
    }
if(1000< x && x <=5000){
        cout<< x-100 <<endl;
        
    }
if(x>5000){

        cout<< x-500 <<endl;
    }

	return 0;
}
