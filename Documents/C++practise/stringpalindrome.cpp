#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char const *argv[])
{
	char s[20];
    int i,l;
    int f=0;
    cout<<"Enter a string:";
    cin>>s;
    l=strlen(s);
    for(i=0;i<l;i++){
        if(s[i]!=s[l-i-1]){
            f=1;
            break;
	   }
	}
    if (f) {
        cout<<s<<" is not a palindrome\n"; 
    }    
    else {
        cout<<s<<" is a palindrome\n"; 
    }
	return 0;
}