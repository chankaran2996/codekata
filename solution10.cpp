#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,i,j,s=0,a[100000],b[100000],m;
	cin>>n>>m;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<m;i++){
		cin>>b[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]==b[j]){
				s=1;
				b[j]='*';
				break;
			}
		}
		if(s==1)
			s=0;
	}
	for(i=0;i<m;i++){
		if(b[i]!='*'){
			s=1;
			break;
		}
	}
    if(s==1)
		cout<<"NO";
	else
		cout<<"YES";
	return 0;
}