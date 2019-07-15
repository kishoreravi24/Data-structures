#include<bits/stdc++.h>
#include<stack>
std::stack<int> print(std::stack<int> s)
{
    s.pop();
    return s;
}
int main()
{
    std::stack<int> s,s1;
    int x=5,data;
    while(x --> 0)
    {
        std::cin>>data;
        s.push(data);
    }
    s1=print(s);
    std::cout<<s1.top();
}