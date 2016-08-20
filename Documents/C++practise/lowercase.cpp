#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char const *argv[])
{
	char str[50];
	cout<<"Enter string to convert to lower case:";
	cin>>str;
	for(int i=0;i<=strlen(str);i++)
  {
	    if(str[i]>=65 && str[i]<=92)
	    {
		str[i]=str[i]+32;
	    }
  }
	cout<<"After Conversion:"<<str;
	return 0;
}