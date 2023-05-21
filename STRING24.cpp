#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1;
    getline(cin,str1);
    string str2;
    getline(cin,str2);
    /*int x=stoi(str1);
    int y=stoi(str2);
    int z=x+y;*/
    cout<<endl;
   str1.append(str2);
    cout<<str1<<endl;
    cout<<str1+str2<<endl;
    cout<<str1<<endl;
    cout<<str1[2]<<endl;
    /*str1.clear();*/
    if (!str1.compare(str2)==0)
    {
        cout<<"is equal"<<endl;
              
    }
     else
        {
            cout<<"is not"<<endl;
        }
    /*str2.clear();*/
    if (str2.empty())
    {
        cout<<"ok then empty"<<endl;\
                
    }
    else
        {
            cout<<"is not"<<endl;
        }
    
    
    return 0;
}
