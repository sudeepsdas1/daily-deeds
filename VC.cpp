#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if (a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u'|| a=='A'|| a=='E'|| a=='I'|| a=='O'|| a=='U')
    {
        cout<<"is a vowel"<<endl;
    }
    else{
        cout<<"is a consonant"<<endl;
    }
    
    return 0;

}