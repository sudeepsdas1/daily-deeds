#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string str,int i,int j){
    if(i>j){
        return 0;
    }

if (str[i]!=str[j])
{
    return false;
}
else{
   return checkPalindrome(str,i+1,j+1);
}
}
int main(){
    string name="abcbba";

    bool isPalindrome=checkPalindrome(  name ,0,name.length()-1);
    if (isPalindrome)
    {
        cout<<"it is a palindrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }
    

    return 0;
}