#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0; i<v.size(); i++)
	{
		cin>>v[i];
	}
	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i];
	}
	cout<<"priority queue"<<endl;
	priority_queue<int,vector<int>,greater<int> > pq(v.begin(),v.end());
//	pq(v.begin(),v.end());
	while(pq.empty()==false)
	{
		cout<<pq.top()<<endl;
		pq.pop();
	}
	return 0;
}
