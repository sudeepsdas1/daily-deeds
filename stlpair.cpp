#include<bits/stdc++.h>
using namespace std;
int main(){
    // pair<int,string> p;
    // //creating a pair
    // p={7,"sudeep"};
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;


    //declaring 2 arrays
    int id[]={1,2,3};
    int marks[]={20,30,40};

    pair<int,int> p_stud[3]; //creating a pair
    p_stud[0]={1,20};
    p_stud[1]={2,30};
    p_stud[2]={3,40};;
    swap(p_stud[0],p_stud[2]);
    for (int i = 0; i < 3; i++)
    {
        cout<<p_stud[i].first<<" "<<p_stud[i].second<<endl;
    }
    return 0;

}