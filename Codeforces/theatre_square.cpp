#include <iostream>

using namespace std;

int main(){
	long long int n,m,a;
	long long int ll,l;
	cin>>n>>m>>a;
	if(n%a==0)
		l=n/a;
	else 
		l=(n/a)+1;
	if(m%a==0)
		ll=m/a;
	else
		ll=(m/a)+1;
	cout<<ll*l;
}
