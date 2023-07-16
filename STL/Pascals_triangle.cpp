#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > Pascals_triangle(int n)
{
	vector<vector<int> > v;
	vector<vector<int> > :: iterator it;
	cout<<"enter the number of rows in the pascals triangle: "<<endl;
	for(int i=0; i<n; i++)
	{
		vector<int> row(i+1,1);   /*1      'row' vector stores each row
		                            11        i+1 is the size 
									121       all values set to '1'
									1331*/
		for(int j=1; j<i; j++)
		{
			row[j]=v[i-1][j]+v[i-1][j-1];
		}
		v.push_back(row);
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			cout<<" "<<v[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	Pascals_triangle(4);
}
