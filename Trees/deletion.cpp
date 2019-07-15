#include<bits/stdc++.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newnode(int data)
{
    struct node *root=(struct node *)malloc(sizeof(struct node));
    root->data=data;
    root->left=NULL;
    root->right=NULL;
}
struct node *insert(struct node *root,int data)
{
    if(root==NULL)
    {
        newnode(data);
    }
    else if(root->data>data)
    {
        root->left=insert(root->left,data);
    }
    else if(root->data<data)
    {
        root->right=insert(root->right,data);
    }
}
struct node *del(struct node *root,int data)
{
    struct node *temp=root;
    if(data<root->data)
    {
        while(root!=NULL)
        {
            if(root->data==data)
            {
                struct node *temp1=root;
                free(temp1);
                temp=root->left;
            }
            root=root->left;
            struct node *temp=root;
        }
    }
    else if(data>root->data)
    {
        while(root!=NULL)
        {
            if(root->data==data)
            {
                struct node *temp1=root;
                free(temp1);
                temp=root->right;
                break;
            }
            root=root->right;
            struct node *temp=root;
        }
    }
}
void print(struct node *root)
{
    if(root!=NULL)
    {
        print(root->left);
        if(root->data!=0)
        {
        std::cout<<root->data<<" ";
        }
        print(root->right);
    }
}
int main()
{
  struct node *root=NULL;
  root=insert(root,10);
  insert(root,5);
  insert(root,4);
  insert(root,12);
  insert(root,15);  
  del(root,15);
  print(root);
}