#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	string a;
	cout<<"Enter String:";
	cin>>a;
	reverse(a.begin(),a.end());
	cout<<"Result:"<<a;
	return 0;
}