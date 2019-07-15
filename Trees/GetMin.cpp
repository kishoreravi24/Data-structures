#include<bits/stdc++.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newnode(int data)
{
    struct node *root = (struct node *)malloc(sizeof(struct node));
    root->data=data;
    root->left=NULL;
    root->right=NULL;
}
struct node *org(struct node *root,int data)
{
    if(root==NULL)
    {
        newnode(data);
    }
    else if(root->data>data)
    {
        root->left=org(root->left,data);
    }
    else if(root->data<data)
    {
        root->right=org(root->right,data);
    }
}
int minVal(struct node *root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root->data;
}
int main()
{
    struct node *root=NULL;
   root= org(root,10);
    org(root,5);
    org(root,20);
    std::cout<<minVal(root);
}