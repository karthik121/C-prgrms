#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,t,s;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{	s=0;
		cin>>n;
		while(n!=0)
		{
			s=s+(n%10);
			n=n/10;
		}
		cout<<s<<"\n";
	}
	return 0;
}
