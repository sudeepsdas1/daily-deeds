#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
	while(t--){
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    if(w=x || w=y || w=z){
	        cout<<"yes"<<endl;
	        
	    }
	    else if(w=x+y || w=y+z || w=z+x || w=x+y+z){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	    
	}
	return 0;
}
