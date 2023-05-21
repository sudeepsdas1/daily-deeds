#include<bits/stdc++.h>
using namespace std;
void printVec(vector<pair<int,int>> v){
    cout<<"size of the vector: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
      cout<<v[i]" ";
    }
    cout<<endl;
}
int main(){  //array of vectors is nothing but creating arrays in vectors 
    int N;  // eg:array vector size 10 have created 10 vectors of 0 size v[0],v[1] are the vectors
    cin>>N;
    vector<int> v[N]; //DECLARING N vectors
    for (int i = 0; i < N; i++) //taking the output of the bigger vector given v[0,]v[1] etc
    {
        int n; //size of ythe individual internal vectors
        cin>>n;
        for (int i = 0; i < n; i++) //taking the input of v[0] and so on
        {
            int x;
            cin>>x; //the inputs of the inner to vector
            v[i].push_back(x);
        }
        
    }
    for (int i = 0; i < N; i++) //loop for printing the vector
    {
        printVec(v[i]);

    }
    
    



    return 0;
}
