#include<iostream>
#include<queue>
using namespace std;

void print_element(queue<int> q)
{
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
}

vector<int> printeven(queue<int> q)
{
	vector<int> v;
	while(!q.empty())
	{
		if(q.front()%2==0)
		{
			v.push_back(q.front());
		}
		q.pop();
	}
	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i]<<" ";
	}
	return v;
}

int main()
{
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	
	print_element(q);
	cout<<endl;
	printeven(q);
}
