#include<iostream>
using namespace std;
    class student{
        public:
        string name;
        int age;
        bool gender;

        void printInfo(){
            cout<<"name"<<endl;
            cout<<name<<endl;
            cout<<"age"<<endl;
            cout<<age<<endl;
            cout<<"gender"<<endl;
            cout<<gender<<endl;

        }
    };
int main(){
    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout<<"name"<<endl;
        cin>>arr[i].name;
        cout<<"age"<<endl;
        cin>>arr[i].age;
        cout<<"gender"<<endl;
        cin>>arr[i].gender;
    }
    for (int i = 0; i < 3; i++)
    {
        arr[i].printInfo();
    }
    
    


    return 0;
}