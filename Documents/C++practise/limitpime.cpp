#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,s=1,num=3,i,c;
   cout<<"Enter the number of prime numbers to print\n";
   cin>>n;
   if(n>=1)
   {
      cout<<"First "<<n<<" prime numbers are :-\n";
      cout<<2<<"\n";
   }
   for(i=2;i<=n;)
   {
      for(c=2;c<=(int)sqrt(num);c++)
      {
         if(num%c==0)
         {
            s=0;
            break;
         }
      }
      if(s!=0)
      {
         cout<<num<<"\n";
         i++;
      }
      s=1;
      num++;
   }         
	return 0;
}