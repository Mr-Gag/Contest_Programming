#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	//freopen("XOR.in","rt",stdin);
	//freopen("XOR.out","wt",stdout);
	int N;
	cin >> N;
	while(N--){
		long long  S,F,i,val;
		
		cin >> S >> F;
		//if(S>F)
			//swap(S,F);
		val = S;
		for(i=S+1;i <= F; i++){
			val = val ^ i;
			}
		cout<<val<<"\n";
		}
	return 0;
}
