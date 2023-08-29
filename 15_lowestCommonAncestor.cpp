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

Node* LCA(Node* root, int n1, int n2){
    if(root == nullptr) return 0;
    if(root->data == n1 || root->data == n2){
        return root;
    }
    Node* leftlca = LCA(root->left, n1, n2);
    Node* rightlca = LCA(root->right, n1, n2);
    if(leftlca && rightlca){
        return root;
    }
    if(leftlca!= NULL){
        return leftlca;
    }
    else{
        return rightlca;
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
    
    int n1= 7, n2 = 6;
    Node* lca = LCA(root,n1,n2);
    if(LCA == nullptr){
        cout<<" lca does not exist"<<endl;
    }
    else{
        cout<<lca->data<<endl;
    }
    
    return 0;
}