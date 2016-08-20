#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a[50],n;
	cout<<"Enter size of array:";
	cin>>n;
	cout<<"Enter elements in array:";
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	cout<<"Elements in array:";
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<"\n";	}
	return 0;
}