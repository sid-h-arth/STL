#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<string> a;
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		string m;
		cin>>m;
		a.push_back(m);
	}
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	sort(a.begin(),a.end());
	cout<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
