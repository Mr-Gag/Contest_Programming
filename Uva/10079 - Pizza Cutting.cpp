#include <bits/stdc++.h>

using namespace std;
typedef long long li;

int main(){
	li k;
	while(cin >> k ){
		if(k < 0 ) break;
		/*li pt = k * (k-1) / 2 + k*2; // pt inter + pt exter
		li res = pt - k +1; // sum of pt subtr line + 1
		* */
		li res = k*(k+1)/2+1;
		cout << res << endl;
		}
	return 0;
	}
