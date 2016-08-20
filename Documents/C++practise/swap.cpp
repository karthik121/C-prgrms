#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b,c;
	cout<<"A=";
	cin>>a;
	cout<<"B=";
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<"After Swap:\n";
	cout<<"A="<<a<<"\n";
	cout<<"B="<<b<<"\n";
	return 0;
}