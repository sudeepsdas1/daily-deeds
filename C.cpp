#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int x;
	cin>>x;
	while(t--){
	    if(x%4==0){
	        cout<<"NORTH"<<endl;
	    }
	     if(x%4==1){
	        cout<<"EAST"<<endl;
	    }
	     if(x%4==2){
	        cout<<"SOUTH"<<endl;
	    }
	     if(x%4==3){
	        cout<<"WEST"<<endl;
	    }
	}
	return 0;
}
 