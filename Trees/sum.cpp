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
void sum(struct node *root)
{
    int sum1=0;
    sum1+=root->data;
    struct node *temp=root->right;
     struct node *temp1=root->left;
    while(temp!=NULL)
    {
        sum1+=temp->data;
        temp=temp->right;
    }
    while(temp1!=NULL)
    {
        sum1+=temp1->data;
        temp1=temp1->left;
    }
    std::cout<<sum1;
}
int main()
{
    struct node *root=NULL;
   root= org(root,10);
    org(root,5);
    org(root,20);
    sum(root);
    return 1;
}