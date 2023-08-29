// program to get right view and left view of a binary tree
#include "bits/stdc++.h"
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void rightview(Node* root){
    if(root == nullptr){
        return;
    }
    queue <Node*> q;
    q.push(root);
    

    while(!q.empty()){
        int n = q.size();
        
        for(int i=0; i<n; i++){
            Node* cur = q.front();
            q.pop();
            if(i == n-1){
                cout<<cur->data<<endl;
            }
            if(cur->left != nullptr){
                q.push(cur->left);
            }
            if(cur->right != nullptr){
                q.push(cur->right);
            }
        }
        
    }
}


void leftview(Node* root){
    if(root == nullptr){
        return;
    }
    queue <Node*> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();
        for(int i= 0; i< n; i++){
            Node* cur = q.front();
            q.pop()
            if(i == n-1){ // or i == 0 or i == 1 if for(int i=1) but then cur->left != nullptr should have been first
                cout<<cur->data<<endl;
            }
            if(cur->right != nullptr){
                q.push(cur->left);
            }
            if(cur->left != nullptr){
                q.push(cur->left);
            }
        }
    }
}
int main() {
    struct Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    //rightview(root);
    leftview(root);
    

    

    
    return 0;
}