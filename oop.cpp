#include<iostream>
using namespace std;
class Employee{
    public:
    string name;
    int age;
    int id;
    void IntroYourself(){
            cout<<"my name is  "<<name<<endl;
            cout<<"my age is   "<<age<<endl;
            cout<<"my id is    "<<id<<endl;
    }
};


int main(){
    Employee employee1;
    employee1.name="sudeep";
    employee1.age=23;
    employee1.id=1;
    employee1.IntroYourself();
    return 0;
}