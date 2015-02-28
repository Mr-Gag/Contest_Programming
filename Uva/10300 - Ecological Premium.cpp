#include <bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		int n;
		cin>>n;
		int res =0;
		while(n--){
			int s,a,m;
			cin>>s>>a>>m;
			int sum = s*m;
			res +=sum;
			}
			cout<<res<<endl;
		}
	return 0;
	}

