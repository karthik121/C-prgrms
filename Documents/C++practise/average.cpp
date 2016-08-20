#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,a,sum=0,avg=0;
	cout<<"Enter Number of Subjects:";
	cin>>n;
	cout<<"Enter Marks for each subject:";
	for (int i = 0; i < n; ++i)
	{
		cin>>a;
		sum=sum+a;
	}
	avg=sum/n;
	cout<<"Average:"<<avg;
	return 0;
}