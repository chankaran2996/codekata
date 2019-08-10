#include <iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,i=0,l,f;
	char s[100000];
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++){
		if(s[i]==s[l-(i+1)])
			f=0;
		else{
			f=1;
			break;
		}
	}
	if(f==1)
		cout<<"NO";
	else
		cout<<"YES";
	return 0;
}