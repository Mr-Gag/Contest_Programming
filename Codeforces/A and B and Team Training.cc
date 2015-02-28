#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	long long n,m;
	cin>>n>>m;
	long long temm=0;
	while(n>0 && m>0 && m+n>=3){
		++temm;
		if(n>m){
			n-=2;
			--m;
			}
		else{
			m-=2;
			--n;
		}
	}
	
	cout<<temm<<endl;
	return 0;
	}
