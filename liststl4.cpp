#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l ;
    


    l.push_back(1);
        l.push_back(22);
            l.push_back(333);
                l.push_back(4444);
    l.push_front(1111);
        l.push_front(222);
            l.push_front(3);
                l.push_front(4);
                for (int i:l)
                {
                    cout<< i <<endl;
                    cout<<"this is the end"<<endl;
                }
                l.sort();
                for (int i:l)
                {
                    cout<< i <<endl;
                }

l.reverse();
for (int i:l)
                {
                    cout<< i <<endl;
                }
                cout<<l.size()<<endl;
                cout<<endl;
                list<int> n(10,22);
     for (int i:n)
                {
                    cout<< i <<endl;
                }


    return 0;
}