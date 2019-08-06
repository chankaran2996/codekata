#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,i,j,k,a[100000];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if((a[i]+a[j])==0)
				cout<<a[i]<<" "<<a[j]<<" ";
		}
	}
	return 0;
}