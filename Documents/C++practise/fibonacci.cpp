#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,a=0,b=1,c,i;
	cout<<"Enter Limit for fibonacci series:";
	cin>>n;
	for (int i=0;i<n;++i)
	{
		
	if(i<=1)
         c=i;
      else
      {
         c=a+b;
         a=b;
         b=c;
      }
      cout<<c<<"\n";
}
	return 0;
}