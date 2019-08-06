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
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				s=1;
				break;
			}
		}
		if(s==1){
			cout<<a[i];
			break;
		}
	}
	if(s==0)
		cout<<"unique";
	return 0;
}