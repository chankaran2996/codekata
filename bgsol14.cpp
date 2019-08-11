#include <iostream>
using namespace std;
int main()
{
	int n,i,q;
	cin>>n>>q;
	for(i=n+1;i<q;i++){
		if(i%2!=0){
			cout<<i<<" ";
		}
	}
	return 0;
}