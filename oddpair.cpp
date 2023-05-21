
/*Problem
Given an integer NN, determine the number of pairs (A, B)(A,B) such that:

1 \leq A, B \leq N1≤A,B≤N;
A + BA+B is odd.
Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of a single integer NN.
Output Format
For each test case, output the number of required pairs.*/
#include <iostream>
using namespace std;


int main() {
    int t;
    cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    if(n%2!=0){ //if n odd hai 
	        cout<<((n*n+1)/2)-1<<endl; // n multiply hogaa with n+1 aur phit divde by 2 qki usme (n/2) even aur (n/2)+1 odd no hai
	    }
	    else{
	        cout<<((n*n)/2)<<endl; //else n even hai  n*n aur phit divie 2 se
	    }
	   
	    
	}
	return 0;
}
