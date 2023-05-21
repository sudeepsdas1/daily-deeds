#include<iostream>
#include<vector>
using namespace  std;
int main(){
    vector<int> v(6);
    cout<<"size     "<<v.size()<<endl;
    cout<<"capacity     "<<v.capacity()<<endl;
    v.push_back(121);
    v.push_back(12);
    v.push_back(12);
    cout<<"size     "<<v.size()<<endl;
    cout<<"capacity     "<<v.capacity()<<endl;
    v.push_back(12);
    cout<<"size     "<<endl<<v.size()<<endl;
    cout<<"capacity     "<<v.capacity()<<endl;
    v.push_back(126671);
    cout<<"size     "<<v.size()<<endl;
    cout<<"capacity     "<<v.capacity()<<endl;
    v.push_back(1234567891);
    cout<<"size     "<<v.size()<<endl;
    cout<<"capacity     "<<v.capacity()<<endl;
    cout<< "what is 0 element?"<<endl<<v.at(0)<<endl;
    cout<< "what is 1 element?"<<endl<<v.at(1)<<endl;
    cout<< "what is 2 element?"<<endl<<v.at(2)<<endl;
    cout<< "what is 3 element?"<<endl<<v.at(3)<<endl;
    cout<< "what is 4 element?"<<endl<<v.at(4)<<endl;
    cout<< "what is 5 element?"<<endl<<v.at(5)<<endl;
    cout<<"front            "<<v.front()<<endl;
    cout<<"back         "<<v.back()<<endl;
    cout<<"before pop"<<endl;
    for (int i:v)
    {
        cout<<i<<endl;
    }
    v.pop_back();
    cout<<"after pop"<<endl;
    for (int i:v)
    {
        cout<<i<<endl;
    }
    cout<<"capacity     "<<v.capacity()<<endl;
    cout<<"size     "<<v.size()<<endl;
    cout<<"maxsize     "<<v.max_size()<<endl;
    

    return 0;
}
/*size=no of elements
capacity=space assigned*/