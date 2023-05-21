#include<iostream>
using namespace std;
class student{
    public:
    int id;
    string name;
    float phone;
    void insert(int i,string a,float x)
    {
    id=i;
    name=a;
    phone=x;
    }
    void display()
    {
        cout<<id<<"  "<<name<<"  "<<phone<<endl;
    }

};
int main(void){
    student s1;
    student s2;
    student s3;
    s1.insert(1,"sudeep",8530066158);
    s2.insert(2,"sudeehhlp",86568530066158);
    s3.insert(3,"sudeephkj",853000808080866158);
    s1.display();
    s2.display();
    s3.display();
    
    return 0;
}  