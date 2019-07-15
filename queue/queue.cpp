#include<bits/stdc++.h>
#include<queue>
int print(std::queue<int> q)
{
    while(!q.empty())
    {
        std::cout<<q.front()<<" ";
        q.pop();
    }
}
int main()
{
    std::queue<int> q;
    int x=5,data;
    while(x --> 0)
    {
        std::cin>>data;
        q.push(data);
    }
    print(q);
}