#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> num){
    cout<<"size of the vector:  "<<num.size()<<endl;
    for (int i = 0; i < num.size(); i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> num(10);
    num.push_back(7);
    printVec(num);
      vector<int> &num2=num;
            num2.push_back(6);
    printVec(num2);
 

    return 0;
  

}