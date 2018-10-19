#include<iostream>
using naespace std;

struct bst
{
    int data;
    struct bst *left;
    struct bst *right;
};

struct bst* create(int key)
{
        struct bst* temp;
        temp=(struct bst*)malloc(sizeof(struct bst));
        temp->data=key;
        temp->right=temp->left=NULL;
        return temp;
};

struct bst *insertion(struct bst* root,int key)
{
    if(root==NULL)
     return create(key);
    if(key<root->data)
        root->left=insertion(root->left,key);

    if(key>root->data)
      root->right=insertion(root->right,key);


      return root;
}
