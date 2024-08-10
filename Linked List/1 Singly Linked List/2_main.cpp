/**
 * All Praise to Allah
 * ---------------------
 * Author: Asif Mohammed Sifat
 * Created: 2024-08-10   16:49:00
 * Source: 
 */
#include<bits/stdc++.h>
#define ll long long int 
#define ull unsigned long long int 
#define nl '\n' 
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val){
        // (*this).val = val;
        this->val = val;
        this->next = NULL;
    }
};

//insert at head
void insertHead(int val,Node* &head){
    Node* newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

//insert at tail
void insertTail(int val,Node* &head){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

// insert any position 

void insertAny(int val,int pos,Node* &head){
    if(pos==0){
        insertHead(val,head);
    }else{
        Node* newNode = new Node(val);
        Node* temp = head;

        for(int i=0;i<pos-1;i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

}

//delete operation
void delete_from_position(Node *&head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

//print list
void printList(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<nl;
}
                    
int main(){    
    // Node* a = new Node(5);
    // cout<<(*a).val<<endl;
    // cout<<a->val<<endl;  


    Node* head = NULL;

    while(true){
        int val;
        cin>>val;

        if(val==-1) break;

        insertTail(val,head);
        // insertHead(val,head);
    }
    printList(head);

    insertAny(10,1,head);
    printList(head);

    insertAny(20,3,head);
    printList(head);

    cout<<"\nAfter Deletion"<<nl;
    // delete_head(head);
    delete_from_position(head,1);
    printList(head);
              
    return 0;
}
