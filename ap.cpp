#include <iostream>
using namespace std;
int main()
{
    cout<<"which kind of term u want?,enter the no."<<endl;
    cout<<"1.even"<<endl;
    cout<<"2.odd"<<endl;
    int b;
    cin>>b;
    int a;
    cout << "enter the first term:" << endl;
    cin >> a;
    if (b==1)
    {
       a%2!=0; 
       return 0;
    }
    int x;
    cout << "enter the last term:" << endl;
    cin >> x;
    
    int n;
    n = ((x - a) / 2) + 1;
    int sum;
    sum = (n * (a + x)) / 2;
    cout << "the sum is:  " << sum << endl;

    return 0;
}