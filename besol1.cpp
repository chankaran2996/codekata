#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int n;
	cin>>n;
	if(n==0)
		cout<<"Zero";
	else if(n>0)
		cout<<"Positive";
	else
		cout<<"Negative";
	return 0;
}