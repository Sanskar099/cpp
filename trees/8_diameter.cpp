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

int calcHeight(Node* root){
    if(root == NULL){
        return 0;
    }
    return max(calcHeight(root->left), calcHeight(root->right)) + 1;
}

int calcDiameter(Node* root){
    if(root == NULL){
        return 0;
    }
    int LHeight = calcHeight(root->left);
    int RHeight = calcHeight(root->right);
    int curDiameter = LHeight + RHeight + 1;

    int lDiameter = calcDiameter(root->left);
    int RDiameter = calcDiameter(root->right);

    return max(curDiameter, max(lDiameter, RDiameter));
}

// O(N) APPROACH:
int cAlDiameter(Node* root, int* height){
    if(root == NULL){
        *height = 0;
        return 0;
    }
    int lh = 0, rh =0;
    int Lheight = cAlDiameter(root->left, &lh);
    int Rheight = cAlDiameter(root->right,&rh);
    
    int curdiameter = lh + rh + 1;
    *height = max(lh,rh) + 1;
    return max(curdiameter, max(Lheight, Rheight));
    }

int main() {
    struct Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    //cout<<calcDiameter(root)<<endl;
    int height = 0;
    cout<<cAlDiameter(root, &height)<<endl;
    return 0;
}