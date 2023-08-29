// program to replace the sum of nodes as we go up
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


void sumreplace(Node* root){
    if(root == NULL){
        return;
    }
    sumreplace(root->left);
    sumreplace(root->right);

    if(root->left != nullptr){
        root->data += root->left->data;
    }
    if(root->right != nullptr){
        root->data += root->right->data;
    }
}

void preorder(Node* root){

    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main() {
    struct Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    sumreplace(root);
    preorder(root);
    
    return 0;
}