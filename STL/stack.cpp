#include<iostream>
#include<stack>
using namespace std;

void printElement(stack<char> st)//print elelments of the stack
{
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
}

int main()
{
	stack<char> s;
	
	s.push('a');
	s.push('b');
	s.push('c');
	s.push('d');
	
	printElement(s);
}
