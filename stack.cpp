#include<iostream>
#include<stack>
using namespace std;

class Stack { //creating a class stack
    //properties
    public:  //making the properties public
        int *arr;  //creating a pointer array
        int top;  //initializing a top position
        int size; //initializing the size

    // behaviour
    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;  //top initially at top
    }

    void push( int element) { //making the push function
        if(size - top > 1) {   //if condition statement means if there is space in the arr 
            top++;  //forward the top
            arr[top] = element;  //insert eelement in top
        }
        else{
            cout << "Stack OverFlow" << endl;  //else there is no space
        }
    }

    void pop() {  //for removing the topmost element in the stack
        if(top >=0 ) {  //if top is greater thean zero
            top--; //top ko peeche leleo
        }
        else{
            cout << "Stack UnderFlow" << endl; //or stack underflow
        }
    }

    int peek() {  //to return the top element
        if(top >=0 )  //retrn the top element if top is greater than zero
            return arr[top];
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty() { //to check is the stack is empty or not
        if( top == -1) {
            return true;  //if top is still at -1 the emty
        }
        else{
            return false;  //else elemnt is present
        }
    }

};


int main() {


    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    if(st.isEmpty()) {
        cout << "Stack is Empty mere dost " << endl;
    }
    else{
        cout << "Stack is not Empty mere dost " << endl;
    }

    
    /*
    //creation of stack
    stack<int> s;

    //push operation
    s.push(2);
    s.push(3);

    //pop
    s.pop();

    cout << "Printing top element " << s.top() << endl;

    if(s.empty()){
        cout << "Stack is empty " << endl;
    }
    else{
        cout << "stack is not empty " << endl;
    }

    cout << "size of stack is " << s.size() << endl;

    */

    return 0;
}