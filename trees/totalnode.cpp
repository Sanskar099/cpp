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

int totnodes(Node* root){
    if(root == NULL){
        return 0;
    }
    return totnodes(root->left) + totnodes(root->right) + 1;
}

int sumnodes(Node* root){
    if(root == NULL){
        return 0;
    }

    return sumnodes(root->left) + sumnodes(root->right) + root->data;

    
}

int calcHeight(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftheight = calcHeight(root->left);
    int rightheight = calcHeight(root->right);
    return max(leftheight, rightheight) + 1;
}


int main() {
    struct Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout<<sumnodes(root)<<endl;
    
    

    return 0;
}