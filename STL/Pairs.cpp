#include<bits/stdc++.h>
#include<iostream>;
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<pair<char,int> > v;
	for(int i=0; i<n; i++)
	{
		char x;
		int y;
		cin>>x>>y;
		v.push_back(make_pair(x,y));
		// OR  v.push_back({x,y});
	}
	for(int i=0; i<n; i++)
		cout<<v[i].first<<" "<<v[i].second<<endl;
	return 0;
}
