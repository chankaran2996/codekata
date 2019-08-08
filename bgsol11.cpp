#include <iostream>
using namespace std;
int main()
{
	int n,i,k,m=1;
	cin>>n>>k;

	for(i=0;i<k;i++)
		m=m*n;
	cout<<m;
	return 0;
}