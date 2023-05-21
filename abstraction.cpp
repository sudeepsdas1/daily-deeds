#include<iostream>
using namespace std;
class AbstractEmployee{
    virtual void AskForPromotion()=0; //pure virtual function makes it obligatory
};
class Employee:AbstractEmployee{
    public:
    string Name;
    int Age;
    void setName(string name){
        Name=name;
    }
    string getName(){
        return Name;
    }
        
         void setAge(int age){
        Age=age;
    }
    int getAge(){
        return Age;
    }
        
    Employee(string name,int age){
        Name=name;
        Age=age;
    }
        void AskForPromotion() {
            if (Age>30)
            {
                cout<<"u got promoted"<<endl;
            }
            else{
                cout<<"u r not promoted"<<endl;
            }
            
        
        }
};
int main(){
    Employee employee1("sudeep",56);
    employee1.setAge(67);
    employee1.AskForPromotion();

    return 0;
} 