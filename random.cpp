#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(NULL));
    string s;
    getline(cin,s);
    int r;
    char c;
    for (int i = 0; i < 1 ; i++)
    {
        cout<<rand()%26<<endl;
        c = 'a' + r;            
        cout << c;
    }
    
    return 0;
}