#include <iostream>
using namespace std;
int factorial(int n);
int main()
{
    int n;
    cout<<"Enter a number for factorial:";
    cin>>n;
    cout<<"Factorial is:"<<factorial(n);
    return 0;
}
int factorial(int n)
{
    if(n!=1)
     return n*factorial(n-1);
}