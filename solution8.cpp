#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,i,j,k,a[100000];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n-2;i++){
		for(j=i+1;j<n-1;j++){
			for(k=j+1;k<n;k++){
				if((a[i]+a[j])==a[k])
					cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<"\n";
			}
		}
	}
	return 0;
}