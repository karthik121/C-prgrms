#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b;
	cout<<"Enter two numbers to compare:";
	cin>>a>>b;
	if(a>b)
		{cout<<a<<">"<<b;}
	else if(a<b)
		{cout<<a<<"<"<<b;}
	else
		{cout<<a<<"="<<b;}


	return 0;
}