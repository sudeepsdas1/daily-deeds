// q:print prev no. of n
//if n=4 print 4 3 2 1

#include<bits/stdc++.h>
using namespace std;

int count(int n){
    if (n==0)
    {
        return  0;
    }
    cout<<n<<" ";
    return count(n-1);
    
}

int main(){
int n;
cin>>n;
count(n);

    return 0;
}


// q:print prev no. of n but 
//if n=4 print 1 2 3 4


// #include<bits/stdc++.h>
// using namespace std;

// int count(int n){
//     if (n==0)
//     {
//         return  0;
//     }
//    
//     return count(n-1);
//     cout<<n<<" ";
    
// }

// int main(){
// int n;
// cin>>n;
// count(n);

//     return 0;
// }