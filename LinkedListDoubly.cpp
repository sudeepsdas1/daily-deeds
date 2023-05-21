#include<iostream>
using namespace std;
   class Node{  //a class node
        public:
//item in the node
        int data; //the middle one is for  the integer data
        Node*prev;//the prev is for storing the pointer of prev node
        Node*next;//the next is for dtoring the pointer of next node


        //constructor
        Node(int d){ //constructing a node with d as a input
            this->data=d; // this node data is d
            this->prev=NULL;//this node prev is null
            this->next=NULL;//thsi node next is null
            
        }
         ~Node() {
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
    }
    };
   

    void Print(Node*head){ //excepting head
        Node*temp=head;// temp node containg head
        while(temp!=NULL){ 
            cout<<temp->data<<" "; //consoling out the dat for print
            temp=temp->next; // temp then pointing to the next 
        }
        cout<<endl;

    }

    void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;

    }
}

    int getLength(Node*head){
        int len=0;
          Node*temp=head;
        while(temp!=NULL){  //only the len is getting++ when temp is getiing next
            len++;
            temp=temp->next;
        }
        return len;

    }


//inserting at head
 void insertAtHead(Node*&head,int d){ //dont forget the pass by ref
    if (head==NULL)
    {
        Node*temp=new Node(d);
        head=temp;
    }
    else
    {
    Node*temp=new Node(d);
    temp->next=head;   //easy read code u will unsderstand
    head->prev=temp;
    head=temp;
    }
    
    

 }

 //insert at tail
 void insertAtTail(Node*&tail,int d){
    if (tail==NULL)
    {
       Node*temp=new Node(d);
        tail=temp;
    }
    else
    {
      Node*temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;  //easy read code u will unsderstand 
    tail=temp; 
    }
    
  

 }


 void insertAtPosition(Node*&head,Node*&tail,int pos,int d){

    //insert at start
if(pos==1){  //if pos ==1 the call insert at head
    insertAtHead(head,d);
    return;
}
Node*temp=head;
int cnt=1;
while(cnt<pos-1){
    temp=temp->next;  //shifting the temp intially temp is at head
    cnt++;
}
//insert at last
if (temp->next=NULL)  //agar temp ka next null hai matlab last hai
{
    insertAtTail(tail,d);  //call insert at tail
    return;
}
//at any position  
Node* nodeToInsert=new Node(d);   //create a node
nodeToInsert->next=temp->next; 
temp->next->prev=nodeToInsert;//read code u will understand
temp->next=nodeToInsert;
nodeToInsert->prev=temp;

 }


int main(){
    Node*node1=new Node(10);
    Node*head=node1;
    Node*tail=node1;
    Print(head);
    cout<<getLength(head)<<endl;
    insertAtHead(head,11);
    Print(head);
    cout<<getLength(head)<<endl;
    insertAtTail(tail, 22);
    Print(head);

 
    return 0;
}