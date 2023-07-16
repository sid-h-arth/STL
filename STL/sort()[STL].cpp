#include<iostream>
#include<algorithm>//include algorithm STL
using namespace std;
int main()
{
	int a[]={2,6,4,9,8,0,1,5,7,3};
	sort(a,a+10);//automatically sorts the array
	for(int i=0; i<10; i++)
	{
		cout<<a[i]<<" ";
	}
}
