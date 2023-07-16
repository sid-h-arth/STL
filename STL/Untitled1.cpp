#include<bits/stdc++.h>
#include<unordered_set>
#include<iostream>
using namespace std;
int main()
{
    unordered_set<int> s;

    s.insert(12);
    s.insert(34);
    s.insert(4);
    s.insert(1);

    for(auto it=s.begin(); it!=s.end(); it++)
    {
        cout<<(*it)<<" ";
    }
return 0;
}
