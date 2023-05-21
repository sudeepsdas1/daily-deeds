#include<iostream>
using namespace std;
int binary(int x){
    int s=0;
    int e=x;
    int mid =s+(e-s)/2;
    int sqr=mid*mid;
    int ans=-1;
    while(s<e){
        if(sqr==x){
            return mid;
        }
        if(sqr<x){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid =s+(e-s)/2;
    }
    return ans;
}

int precision(int x,int pre,int y){
    double factor=1;
    double ans=y;
    for (int i = 0; i < pre; i++)
    {
        factor=factor/10;
         for (double j = ans; j*j < x; j=j+factor)
    {
        j=j+ans;
    }

    }
   return ans;

}
int main(){
    int x;
    cin>>x;
    cout<<"enter the no. whose root u want: "<<endl;
    int y=binary(x);
    cout<<precision(x,3,y)<<endl;

    return 0;
}
