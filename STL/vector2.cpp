#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v,w;
	vector<int> :: iterator it;
	v.push_back(10);
	v.push_back(9);
	v.push_back(8);
	
	for(it=v.begin(); it!=v.end(); it++)//v.begin() passes the address 
	                                   //of the first element to the iterator
	{
		cout<<*it<<" "<<endl;;
	}
	
	
	w.assign(9,6);//'6' printed '9' times
	w.insert(w.begin()+3,9);//first parameter is an iterator
	for(int i=0; i<w.size(); i++)
	{
		cout<<w[i]<<" ";
	}
	cout<<endl;
	
	w.swap(v);
	for(it=v.begin(); it!=v.end(); it++)//v.begin() passes the address 
	                                   //of the first element to the iterator
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	for(it=w.begin(); it!=w.end(); it++)//v.begin() passes the address 
	                                   //of the first element to the iterator
	{
		cout<<*it<<" ";;
	}
	
}
