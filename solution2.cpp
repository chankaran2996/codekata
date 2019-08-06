#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,i,j,s=0,a[100000];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
		s=s+a[i];
	}
	if(s==0)
		cout<<s;
	else{
		for(i=0;i<n-1;i++){
			for(j=i;j<n;j++){
				if(a[i]<a[j]){
					s=a[i];
					a[i]=a[j];
					a[j]=s;
				}
			}
		}
		for(i=0;i<n;i++)
			cout<<a[i];
	}
	return 0;
}