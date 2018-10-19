#include<iostream>
using namespace std;

void Preorder(struct bst *root)
{
    if(root==NULL)
        return;
    cout<<root->data;
    Preorder(root->left);
    Preorder(root->right);

}
void Postorder(struct bst *root)
{
    if(root==NULL)
        return;
    Preorder(root->left);
    Preorder(root->right);
    cout<<root->data;
}
void Inorder(struct bst *root)
{
    if(root==NULL)
        return;
    Preorder(root->left);
    cout<<root->data;
    Preorder(root->right);
}
void Levelorder(int level,struct bst *root)
{
    if(l==1)
    {
        cout<<root->data;
        return;
    }
    Levelorder(l-1,root->left);
    Levelorder(l-1,root->right);
}

