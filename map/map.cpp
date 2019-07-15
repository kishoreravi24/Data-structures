#include<bits/stdc++.h>
#include<unordered_map>
int main()
{
    std::unordered_map<std::string,int> map;
    map.insert({{"kishore"},{100}});
    map.insert({{"arjun"},{80}});
    map.insert({{"goku"},{90}});
    map.insert({{"vegeta"},{89}});
    map.at("vegeta")=90;
    for(auto& x: map)
    {
        std::cout<<x.first<<" "<<x.second<<"\n";
    }
}