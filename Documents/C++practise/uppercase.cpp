#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	string a;
	cout<<"Enter string to convert to upper case:";
	cin>>a;
	transform(a.begin(), a.end(),a.begin(), ::toupper);
	cout<<"After conversion:"<<a;
	return 0;
}