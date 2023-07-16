#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	vector<int> :: iterator it;//acts as a pointer
	
	v.push_back(3);
	v.push_back(2);
	v.push_back(1);
	
	it=v.begin();
	cout<<it[0]<<endl;
	
	/*it=v.end();
	cout<<it[0]<<endl;*/
	
	cout<<v.size()<<endl; //3
	v.pop_back();//element not deleted only size reduces
	cout<<v.size()<<endl;//2
	for(int i=0; i<=2; i++)
	{
		cout<<v[i]<<" ";
	}
}
