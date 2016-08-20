#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char const *argv[])
{
	char c[50];
	cout<<"Enter a string to count letters:";
	cin>>c;
	cout<<"Length:"<<strlen(c);
	return 0;
}