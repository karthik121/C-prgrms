#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,t,s;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>n;
		s=0;
		if (n>10)
		{
			s=s+(n%10);
		}
		while(n>=10)
			{n=n/10;
			}
		s=s+n;
		cout<<s<<"\n";

	}
	return 0;
}