#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter Number to check even or odd:";
	cin>>n;
	if (n%2==0)
	{
		cout<<"Even";	}
	else {cout<<"Odd";}
	return 0;
}