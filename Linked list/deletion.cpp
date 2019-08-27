#include<bits/stdc++.h>
struct node
{
    int data;
    struct node *next;
};

int print(struct node *head)
{
    while(head!=NULL)
    {
        std::cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}
int delete_node(struct node *head,int data)
{
    while(head!=NULL)
    {
        if(head->next->data==data)
        {
           struct node *temp;
           temp=head->next->next;
           head->next=temp;
           return 0;
        }
    }
    return 0;
}
int main()
{
    struct node *head=NULL;
    int x=5,data;
    while(x --> 0)
    {
        struct node *temp=(struct node *)malloc(sizeof(struct node));
        struct node *temp1=head;
        std::cin>>data;
        temp->data=data;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            while(temp1->next!=NULL)
            {
                temp1=temp1->next;
            }
            temp1->next=temp;
        }
    }
    print(head);
    delete_node(head,20);
    std::cout<<"\n";
    print(head);
}
