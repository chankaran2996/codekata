#include <iostream>
using namespace std;
int main()
{
	int n,i=0,a[4],c=0,f;
	cin>>n;
	while(n!=0){
		a[i]=n%10;
		i++;
		n=n/10;
		c++;
	}
	for(i=0;i<c;i++){
		if(a[i]==a[c-(i+1)])
			f=0;
		else{
			f=1;
			break;
		}
	}
	if(f==1)
		cout<<"no";
	else
		cout<<"yes";
	return 0;
}