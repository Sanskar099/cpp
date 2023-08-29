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


bool isbalanced(Node* root, int * height){

    if(root == nullptr){
        return true;
    }

    int lh = 0, rh =  0;
    if(isbalanced(root->left, &lh) == false){
        return false;
    }
    if(isbalanced(root->right, &rh) == false){
        return false;
    }
    *height = max(lh,rh) + 1;
    if(abs(lh-rh) <=1){
        return true;
    }
    else{
        return false;
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
    int height = 0;
    if(isbalanced(root, &height) == true){
        cout<<"the tree is balanced. "<<endl;
    }
    else{
        cout<<"its not, go die."<<endl;
    }
    preorder(root);
    
    return 0;
}