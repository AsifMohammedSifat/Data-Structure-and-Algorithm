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
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
//insert - manually
void insert(Node* &root,int val){
    Node* newNode = new Node(val);

    if(root==NULL){
        root = newNode;
        return;
    }

    Node* cur = root;
    Node* par = NULL;

    while(cur!=NULL){
        if(cur->val<newNode->val){
            par = cur;
            cur = cur->right;
        }
        else{
            par = cur;
            cur = cur->left;
        }
    }

    if(newNode->val>par->val){
        par->right = newNode;
    }else{
        par->left = newNode;
    }

}

//print- Level Order
void printBST(Node* root){
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        cout<<f->val<<" ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);

    }
    cout<<endl;

}

// search - recursive
bool search_recursive(Node* root,int searchval){
    if(root==NULL) return false;
    if(root->val==searchval) return true;

    if(root->val>searchval) return search_recursive(root->left,searchval);
    else return search_recursive(root->right,searchval);
}

//search - manual
bool search_manual(Node* root,int searchval){
    Node* cur = root;
    while(cur!=NULL){
        if(searchval<cur->val) cur = cur->left;
        else if(searchval>cur->val) cur = cur->right;
        else return true;
    }
    return false;
}

//deletion  ->No child -> One child  ->Two child 
 void Delete(Node* root,int val)
    {
        Node* cur = root;
        Node* prv = NULL;

        while(cur != NULL)
        {
            if(val > cur->val)
            {
                prv = cur;
                cur = cur->right;
            }
            else if(val < cur->val)
            {
                prv = cur;
                cur = cur->left;
            }
            else{
                break;
            }
        }
        if(cur== NULL)
        {
            cout<<"val is not present in BST\n";
            return;
        }
        //Case 1: both child is NULL
        if(cur->left == NULL &&cur->right==NULL)
        {
            if(prv->left!=NULL && prv->left->val== cur->val)
            {
                prv->left = NULL;
            }
            else{
                prv->right = NULL;
            }
            delete cur;
            return;
        }
        //Case 2: node has only one child
        if(cur->left==NULL && cur->right != NULL)
        {
            if(prv->left!=NULL &&prv->left->val== cur->val)
            {
                prv->left = cur->right;
            }
            else{
                prv->right = cur->right;;
            }
            delete cur;
            return;
        }
        if(cur->left!=NULL && cur->right == NULL)
        {
            if(prv->left!=NULL &&prv->left->val== cur->val)
            {
                prv->left = cur->left;
            }
            else{
                prv->right = cur->left;
            }
            delete cur;
            return;
        }
        //Case 3: node has two child
        Node *tmp = cur->right;
        while(tmp->left!=NULL)
        {
            tmp = tmp->left;
        }
        int saved = tmp->val;
        Delete(root,saved);
        cur->val = saved;

    }


int main(){
    Node* root = NULL;

    insert(root,5);
    insert(root,4);
    insert(root,6);
    insert(root,2);
    insert(root,7);

    printBST(root); 

    if(search_recursive(root,7)) cout<<"YES\n";
    else cout<<"NO\n";      

    if(search_manual(root,57)) cout<<"YES\n";
    else cout<<"NO\n";         
              
    return 0;
}
