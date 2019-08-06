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
		for(j=0;j<n;j++){
			if(i==j)
				continue;
			if(a[i]==a[j]){
				s=1;
				break;
			}
		}
		if(s==0){
			cout<<a[i];
			break;
		}
		else
			s=0;
	}
	return 0;
}