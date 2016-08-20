#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter limit to print even numbers:";
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		if(i%2==0)
			{cout<<i<<"\n";}
	}
	return 0;
}