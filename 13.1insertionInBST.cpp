#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
node* bstInsertion(node* root, int val){
  
    if(root == NULL){
       return new node(val);
    }
    if(val > root->data){
      root->right = bstInsertion(root->right,val);
    }
    else{
      root->left = bstInsertion(root->left, val);
    }
    return root;
}
void inorderTraversal(node* root){
    if(root == NULL){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

int main(){
    node* root = NULL;
    root = bstInsertion(root,5);
    bstInsertion(root,1);
    bstInsertion(root,3);
    bstInsertion(root,4);
    bstInsertion(root,2);
    bstInsertion(root,7);
    inorderTraversal(root);
    return 0;
}