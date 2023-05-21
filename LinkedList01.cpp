#include<bits/stdc++.h>
using namespace std;
class Node{  //creating a class node
    public:
    int data;  //intialize a part which will consist data
    Node* next;  //one wich will consist address of next node

    Node(int data){  //creating a constructor for node making with input as a int
        this->data =data; //where data is equal to the data we pass as int
        this->next=NULL;  //and the next is pointing to null
    }


      //destructor
    ~Node() {
        int value = this -> data;  //the destructor is for memory free ing
        //memory free
        if(this->next != NULL) {  //next points to the next
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node* &head,int d){
   
    //create new node
    Node* temp=new Node(d); 
    temp-> next=head;//temp ka next bana head
    head=temp; //head me temp

}
void insertAtTail(Node* &tail,int d){  //creating a function insertail inputing tail and data value
    Node* temp=new Node(d); //creating a new node with data d
    tail-> next=temp; //tail is pointing to temp
    tail=tail-> next; //updating tail to next

}

void print (Node* &head){ //print function with head
    Node* temp=head; 
    while(temp!=NULL){ //jab temp is not equal to null
        cout<<temp->data<<" "; //cout the data
        temp=temp->next ; //temp becomes temp of next
    }
    cout<<endl;


}

void insertAtPosition(Node*&head,int position,int d){  //creating a function with head position and data

Node*temp=head; //node of temp is the head
int cnt=1; //cnt is where the list starts
 while(cnt<position-1){ //cnt less than position -1
    temp=temp->next; //temp will turn to temp next
    cnt++; 
 }
 Node*nodeToInsert=new Node(d);//creating new node to be inserted
 nodeToInsert->next=temp->next;  //node to insert ka next will point at temp ka next
 temp->next=nodeToInsert;//temp ka next will point at node to insert pe


}



void deleteNode(int position, Node* & head) {   //creating a delete function with its position and head as a input

    //deleting first or start node
     if(position == 1) {   //for first node
        Node* temp = head;  /// temp is point to head
        head = head -> next; //head will  point to next
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;  //as it is stack memory deletin
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;  //current  pointing head
        Node* prev = NULL; 

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
}

int main(){

    Node* node1 =new Node(10); //creating a new node with pointer of name node1
    // cout<<node1 ->data<<endl; //getting the node as output
    // cout<<node1-> next<<endl;  // getting the next node address
    Node*head=node1;
    Node*tail=node1;

    print(head);


    insertAtHead(head,12);
    print(head);
      insertAtHead(head,15);
    print(head);
          insertAtTail(tail,5);
    print(head);
    insertAtPosition(head,2,22);
    print(head);

deleteNode(1,head);
print (head);

    return 0;
}