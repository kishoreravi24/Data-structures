#include<bits/stdc++.h>
struct node
{
    int top;
    int capcity;
    int arr[100];
};
struct node *create(int capcity)
{
    struct node *stack=(struct node *)malloc(sizeof(struct node));
    stack->capcity=capcity;
    stack->top=-1;
}
int push(struct node *stack,int data)
{
    stack->top++;
    stack->arr[stack->top]=data;
}
int pop(struct node *stack)
{
    std::cout<<stack->arr[stack->top]<<" ";
}
int main()
{
    struct node *stack=create(100);
    push(stack,10);
    push(stack,20);
    push(stack,30);
    pop(stack);
}