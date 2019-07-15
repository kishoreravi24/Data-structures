#include<bits/stdc++.h>
#include<vector>
int main()
{
    std::vector<int> vect(100);
    int arr[3]={100,101,102};
    vect.insert(vect.begin(),arr,arr+3);
    vect.resize(3);
    //vect.shrink_to_fit();
    for(auto it=vect.begin();it<=vect.end();it++)
    {
        std::cout<<*it<<" ";
    }
}