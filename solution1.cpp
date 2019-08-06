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
		if(a[i]=='*')
			continue;
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				s=1;
				a[j]='*';
			}
		}
		if(s==1){
			cout<<a[i]<<" ";
			s=0;
		}

	}
;
	return 0;
}