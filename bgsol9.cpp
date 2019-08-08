#include <iostream>
using namespace std;
int main()
{
	int n,i,k,a[100000],s=0;
	cin>>n>>k;
	for(i=0;i<n;i++){
	cin>>a[i];
	}
	for(i=0;i<k;i++)
		s=s+a[i];
	cout<<s;
	return 0;
}