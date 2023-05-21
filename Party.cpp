 #include<iostream>
 using namespace std;
 int main(){
    cout<<"enter yor age: ";
    int age;
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"You are underaged for my party"<<endl;
    }
    else if(age==18){
        cout<<"You bring consent letter from your guardian"<<endl;
    }
    else if(age<1){
        cout<<"Paida hole Bsdk"<<endl;
    }
    else{
        cout<<"You are invited to the party"<<endl;
    }
    return 0;
    }