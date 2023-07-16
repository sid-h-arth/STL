#include<iostream>
#include<list>
using namespace std;

void print_list(list<int> l)
{
	list<int> ::iterator it;
	it=l.begin();
	while(it!=l.end())
	{
		cout<<*it<<" ";
		it++;
	}
}

int main()
{
	list<int> l;
	l.push_back(10);
	l.push_back(23);
	l.push_back(89);
	l.push_back(1);
	
	print_list(l);
}
