#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    string s;
    cout<<"enter a string :"<<endl;
    getline(cin,s);



    char c;
    int r;

    srand (time(NULL));    
    for (int i=0; i<s.size(); i++)
    {    r = rand()%26;  
          c = 'a' + r;     
          cout << c;
    }
    return 0;
}