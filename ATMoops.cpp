#include<iostream>
using namespace std;
void ShowMenu(){
    cout<<"*****MENU*****"<<endl;
    cout<<"1.Check Balance"<<endl;
    cout<<"2.Deposit Money"<<endl;
    cout<<"3.Withdraw Money"<<endl;
    cout<<"4.Exit"<<endl;

}
int main(){

    int option;
     double balance;
    balance=21000;


    do
    {
            ShowMenu();
    cin>>option;
    system("cls");

        switch(option){
        case 1:cout<<"the balance is:    "<<balance<<endl;
        break;
        case 2:cout<<"enter the amount to be deposit:"<<endl;
        double deposit;
        cin>>deposit;
        balance+=deposit;
        cout<<"available balance is"<<balance<<endl;
        break;
        case 3:cout<<"enter the amount to be withdrawn:"<<endl;
        double withdrawn;
        cin>>withdrawn;
        if (withdrawn>=balance)
        {
            cout<<"not enough account balance"<<endl;
        }
        else{
        balance-=withdrawn;
        cout<<"available balance is: "<<balance<<endl;
        }
        break;
    }
    } while (option!=4);
    
    
    return 0;
}