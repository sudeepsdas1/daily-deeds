#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int c0 = 0;
        int c1 = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '0')
            c0++;
            if(s[i] == '1')
            c1++;
        }
        if(c0 == 1 || c1 == 1)
        cout << "Yes" << endl;
        else
        cout << "No" << endl;
        
    }
    return 0;
}