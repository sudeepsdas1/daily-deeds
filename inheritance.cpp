#include<iostream>
using namespace std;
class Employee{
private:
int Id;
protected:
string Name;
public:
void setName(string name){
    Name=name;
}
string getName(){
    return Name;
}
void setId(int id){
    Id=id;
}
int getId(){
    return Id;
}
void Intro(){
    cout<<"ur name and id is as following "<<Name<<"  "<<Id<<endl;
}
  void Work(){
        cout<<Name<<"is working and codig"<<getId()<<endl;
    }

Employee(string name,int id){
    Name=name;
    Id=id;
}
};
class Developer:public Employee{
public:
    string Favlang;
    Developer(string name,int id,string favlang)
        :Employee(name,id)
        {
            Favlang=favlang;
        }
    void Fixbug(){
        cout<<Name<<"fixed bug"<<"with language"<<Favlang<<getId()<<endl;
    }
     void Work(){
        cout<<Name<<"is debugging"<<Favlang<<getId()<<endl;
    }
};

int main(){
    // Employee employee1("sudeep",56);
    // employee1.Intro();
    Developer d("nach",67,"c++");
    d.Fixbug();
    d.Work();
    

    return 0;
}