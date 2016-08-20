#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter Limit to print numbers in reverse:";
	cin>>n;
	for(int i=n;i>0;i--)
		{cout<<i<<"\n";}
	return 0;
}