#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m=0;
	cout<<"Enter limit to add numbers:";
	cin>>n;
	for(int i=1;i<=n;i++)
		{m+=i;}
	cout<<"Result="<<m;
	return 0;
}