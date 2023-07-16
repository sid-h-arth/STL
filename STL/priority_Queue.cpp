#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int> pq;
	priority_queue<int,vector<int>,greater<int> > pq2;
	pq.push(10);
	pq.push(15);
	pq.push(5);
	cout<<pq.size()<<endl;
	cout<<pq.top()<<endl;
	
	while(pq.empty()==false)
	{
		cout<<pq.top()<<endl;
		pq.pop();
	}
	
	cout<<"queue2"<<endl;
	pq2.push(10);
	pq2.push(15);
	pq2.push(5);
	cout<<pq2.size()<<endl;
	cout<<pq2.top()<<endl;
	
	while(pq2.empty()==false)
	{
		cout<<pq2.top()<<endl;
		pq2.pop();
	}
	
	return 0;
}
