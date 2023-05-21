#include <iostream>
using namespace std;

int main() {

	    int n;
	    int x;
	    cin>>n;
	    cin>>x;
	    int a[n];
	    int b[n];
	    int sum=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        cin>>b[i];
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]>=x){
	            sum=sum+b[i];
	        }

	    }
	      cout<<sum<<endl;
	return 0;
}
