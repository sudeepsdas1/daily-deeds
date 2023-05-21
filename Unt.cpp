#include<iostream>
using namespace std;
class Sum
{
    private:
    int x=32,y=67;
    
    public:
        void Sum();
};
void Sum::sum()
{
    int sum;
    sum=x+y;
    cout<<sum<<endl;
}    
int main()  
{
    Sum s;
    s.sum();
}

