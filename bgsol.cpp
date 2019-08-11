#include <iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,i,f=1;
    cin>>n;
	for(i=2;i<n;i++){
		if(n%i==0){
			f=0;
			break;
		}
	}
	if(f==0)
		cout<<"no";
	else
		cout<<"yes";
	return 0;
}