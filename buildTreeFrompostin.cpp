// building a tree from postorder and inorder, reverse of preorder and inorder
#include"bits/stdc++.h"
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

void inordertrav(struct Node* root){
    if(root == NULL){
        return;
    }
    inordertrav(root->left);
    cout<<root->data<<" ";
    inordertrav(root->right);
}

int search(int inorder[], int start, int end, int curr){
    for(int i=0;i<end;i++){
        if(inorder[i] == curr){
            return i;
        }
    }
    return -1;
}

Node* buildTree(int postorder[], int inorder[], int start, int end){
    if(start>end){
        return NULL;
    }
    static int idx = end;
    int curr = postorder[idx];
    idx--;
    Node* node = new Node(curr);
    if(start == end){
        return node;
    }
    int pos = search(inorder,start,end,curr);
    node->right = buildTree(postorder,inorder,pos+1, end);
    node->left = buildTree(postorder, inorder, start, pos-1);

    return node;
}

int main(){
    int postorder[] = {4,2,5,3,1};
    int inorder[] = {4,2,1,5,3};

    struct Node* root = buildTree(postorder, inorder, 0, 4);
    inordertrav(root);

return 0;
}
