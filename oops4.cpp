#include<iostream>
using namespace std;
class student{
    public:
    student(){
        cout<<"default constructor invoked"<<endl;
    }
};
int main(){
    student s1;


    return 0;
}



/*class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;    // Create an object of MyClass (this will call the constructor)
  return 0;
}*/