#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int s,e,i,j,f=1;
    cin>>s>>e;
    for(i=s+1;i<e;i++){
    	f=1;
	for(j=2;j<i;j++){
		if(i%j==0){
			f=0;
			break;
		}
	}
	if(f==0)
		continue;
	cout<<i<<" ";
    }
	return 0;
}