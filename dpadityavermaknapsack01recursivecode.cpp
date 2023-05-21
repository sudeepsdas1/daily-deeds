//Q
//the q states that you are given a sack in which u have to input weight which have prices on 
//it and maximize the price


#include<iostream>
using namespace std;
int knapsack(int wt[],int val[],int n,int w){   // wt[] is array of weigths
//vl[] is array of price we will get
//n is the size of both array, //w is weight of knapsack
    //base case
    if(w==0||n==0)
    //base case when price is zero and sack cant be filleed  
    return 0;
    //choices table 
    //choice 1 when weight is less
    //so u choose wheter u will include the last element or not ....refer code an notes
    if(wt[n-1]<=w){
        return max(val[n-1]+knapsack(wt[], val[],n-1,w-wt[n-1]),knapsack(wt[], val[],n-1,w));
    }

    //choice 2 when weight is more so u cant do anything  //returning with reducing array size
    else if {
        return knapsack(wt[], val[],n-1,w);
    }
    else{
        return -1;
    }
}
int main(){
    int n;
    cin>>n;
    int wt[];
    for(i=0;i<n;i++){
        cin>>wt[];
    }
    int vl[];
    for(i=0;i<n;i++){
        cin>>vl[];
    }
int w;
cin>>w;
cout<<knapsack(wt,vl,n,w)<<endl;
    return 0;
}