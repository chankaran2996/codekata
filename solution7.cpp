#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,i,j,s=0,a[100000];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		if((i%2==0)&&(a[i]%2==1))
			cout<<a[i]<<" ";
		if((i%2==1)&&(a[i]%2==0))
			cout<<a[i]<<" ";
	}

	return 0;
}