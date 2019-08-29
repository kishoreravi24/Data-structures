#include<bits/stdc++.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
int print(struct node *head)
{
    struct node *temp;
    while(head!=NULL)
    {
        if(head->right==NULL)
        {
            temp=head;
        }
        std::cout<<head->data<<" ";
        head=head->right;
    }
    std::cout<<"\n";
    while(temp!=NULL)
    {
        std::cout<<temp->data<<" ";
        temp=temp->left;
    }
}
int main()
{
    struct node *head=NULL;
    int x=5,data;
    while(x --> 0)
    {
        struct node *temp=(struct node *)malloc(sizeof(struct node ));
        std::cin>>temp->data;
        temp->left=NULL;
        temp->right=NULL;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            struct node *temp1;
            temp1=head;
            while(temp1->right!=NULL)
            {
                temp1=temp1->right;
            }
            temp1->right=temp;
            temp->left=temp1;
        }
    }
    print(head);
}