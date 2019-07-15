#include<bits/stdc++.h>
struct node{
    std::string data;
    struct node *left;
    struct node *right;
};
struct node *newnode(std::string data)
{
    struct node *root = (struct node *)malloc(sizeof(struct node));
    root->data=data;
    root->left=NULL;
    root->right=NULL;
}
void print(struct node *root)
{
    if(root!=NULL)
    {
    std::cout<<root->data<<"\n";
    print(root->left);
    }
}
int main()
{
    struct node *root=newnode("kishore");
    root->left=newnode("DriveD");
    root->right=newnode("DriveF");
    root->left->left=newnode("Downloads");
    print(root);
}