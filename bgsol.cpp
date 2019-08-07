#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	if(n<0)
		cout<<"invalid";
	else if(n%2==0)
		cout<<"even";
	else
		cout<<"odd";
	return 0;
}