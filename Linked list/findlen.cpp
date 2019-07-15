#include<bits/stdc++.h>
struct node
{
    int data;
    struct node *next;
};
int print(struct node *head,int x)
{
    int count=0,g=0;
    while(head!=NULL)
    {
        if(head->data!=0)
        {
            if(head->data==x)
            {
                g=1;
            }
            if(g==1)
            {
                count++;
            }
        }
        head=head->next;
    }
    std::cout<<count;
}
int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    int x=5,data,x1;
    std::cin>>x1;
    while(x --> 0)
    {
        struct node *temp=(struct node *)malloc(sizeof(struct node));
        struct node *temp1=head;
        std::cin>>data;
        temp->data=data;
        temp->next=NULL;
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
    print(head,x1);
}