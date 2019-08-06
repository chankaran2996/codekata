#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,i,j,k,s=0,a[100000];
	cin>>n>>k;
	for(i=0;i<n;i++){
		cin>>a[i];
		s=s+a[i];
	}
		for(i=0;i<n-1;i++){
			for(j=i;j<n;j++){
				if(a[i]<a[j]){
					s=a[i];
					a[i]=a[j];
					a[j]=s;
				}
			}
		}
	cout<<a[k-1];
	return 0;
}