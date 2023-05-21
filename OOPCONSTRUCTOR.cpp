#include<iostream>
using namespace std;
class Employee{
    public:
    string Name;
    int Id;
    int Age;
        
        void Intro(){
            cout<<"ur name  "<<Name<<endl;
            cout<<"ur Id  "<<Id<<endl;
            cout<<"ur Age  "<<Age<<endl;
        }
    Employee(string name,int id,int age){
        Name=name;
        Id=id;
        Age=age;
    }
};
int main(){
    Employee employee1("sudeep",45,56);
    employee1.Intro();

    return 0;
}