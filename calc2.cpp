#include<iostream>
using namespace std;
int main(){
    cout<<"SQUARE(1)"<<endl<<"RECTANGLE(2)"<<endl<<"TRIANGLE(3)"<<endl<<"CIRCLE(4)"<<endl;
    cout<<"enter the shape no. who's area you need"<<endl;
    char op;
    cin>>op;
    switch (op)
    {
    case ('1'):
        int n;
        cout<<"enter length"<<endl;
        cin>>n;
        float area;
        area=n*n;
        cout<<area<<endl;
        break;

        case ('2'):
        int d;
        cout<<"enter length"<<endl;
        cin>>d;
        int m;
        cout<<"enter breadth"<<endl;
        cin>>m;
        float area1;
        area1=d*m;
        cout<<area1<<endl;
        break;

        case ('3'):
        int c;
        cout<<"enter length"<<endl;
        cin>>c;
        int a;
        cout<<"enter height"<<endl;
        cin>>a;
        float area2;
        area2=(c*a)/2;
        cout<<area2<<endl;
        break;

        case ('4'):
        int b;
        cin>>b;
        float area3;
        area3=b*b*3.14;
        cout<<area3<<endl;
        break;
    
    default:
        break;
    }
    return 0;
}