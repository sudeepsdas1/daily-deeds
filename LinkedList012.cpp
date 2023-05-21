Node* sortList(Node *head)
{
int zeroCount=0;  //initialize the count of 0 1 2
int oneCount=0;
int twoCount=0;
    Node*temp=head;
    while(temp!=NULL){
        if(temp->data==0){   //increase the counts
            zeroCount++;
        }
        else if(temp->data==1){
            oneCount++;
        }
        else if(temp->data==2){
            twoCount++;
        }
        temp=temp->next;
    }
    
    temp=head;
    while(temp!=NULL){
        if(zeroCount!=0){   // when zero count or one count or two count is not 0
            temp->data=0; //addzero
            zeroCount--;  //reduce the counts
        }
        else if(oneCount!=0){
            temp->data=1; //addone
            oneCount--;  //reduce the counts
        }
          else if(twoCount!=0){
            temp->data=2;  //addtwo
            twoCount--;   //reduce the counts
        }
        temp=temp->next;
    }
    return head;
}



//time O(n)
//space O(1)
