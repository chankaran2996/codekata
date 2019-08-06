#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,i,s=-1,a[100000];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==i){
			cout<<a[i]<<" ";
			s=0;
		}
	}
	if(s==-1)
		cout<<s;
	
	return 0;
}