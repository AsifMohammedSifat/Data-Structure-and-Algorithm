/*
||-----------------------||
||  All Praise to Allah  ||
||-----------------------||
||  Asif Mohammed Sifat  ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
*/

/*
    Basic operation:
    1) Insertion (at head, at tail, at any position)
    2) Deletion (at head, at tail)
    3) Print (Print Noramlly , Recursively Reverse)
    4) Calculate Size

*/
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;

    Node(int val){
       this->val = val;
       this->next = NULL;        
    }

};


/*====================| Calculate Size of list |=========================*/

int getSize(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    return count;
}


/*====================| Insert operation  |=========================*/

//insert at tail build linked list
void insertAtTail(Node* &head,int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;

}

//Insert at head
void insertAtHead(Node* &head,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    head = newNode;
    newNode->next = temp;

}

//insert at any position
void insertAtAnyPosition(Node* &head,int index,int val){
    Node* newNode = new Node(val);
    if(index==1){
        insertAtHead(head,val);
        return;
    }
    else if(index==getSize(head)){
        insertAtTail(head,val);
        return;
    }

    Node* temp = head;

    int pos = 1;

    while(pos!=index-1){
        temp = temp->next;
        pos++;
    }

    Node* temp2 = temp->next;
    temp->next = newNode;
    newNode->next = temp2;
}


/*====================| Delete operation  |=========================*/

//delete at head
void deleteFromHead(Node* &head){
    Node* temp = head;

    Node* temp2 = temp->next;
    head = temp2;
    delete temp;
}

//delete from tail
void deleteFromTail(Node* &head){
    Node* temp = head;

    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    Node* temp2 = temp->next;
    temp->next = NULL;

    delete temp2;
}

/*====================| Print List |=========================*/
void printList(Node* head){
    Node* temp = head;
    
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

/*====================| Recursion |=========================*/
void print_recusively(Node* tmp)
{
    if(tmp==NULL) return;
    print_recusively(tmp->next);
    cout<<tmp->val<<" ";
}


int main(){
    Node* head = NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    insertAtTail(head,50);
    insertAtHead(head,60);

    printList(head);

    cout<<getSize(head)<<endl;

    insertAtAnyPosition(head,1,70);
    insertAtAnyPosition(head,7,70);
    insertAtAnyPosition(head,3,5000);
    
    printList(head);           
  
    deleteFromHead(head);
    deleteFromTail(head);
    printList(head);
       
    return 0;
}
