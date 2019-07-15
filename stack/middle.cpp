#include<bits/stdc++.h>
#include<stack>
int print(std::stack<int> s)
{
    while(!s.empty())
    {
        std::cout<<s.top();
        s.pop();
    }
}
int main()
{
    std::stack<int> s;
    int n,i,x;
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>x;
        if(round(n/2)!=i)
        {
            s.push(x);
        }
    }
    print(s);
}