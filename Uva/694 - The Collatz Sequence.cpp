#include <bits/stdc++.h>

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("in.txt","rt",stdin);
		freopen("out.txt","wt",stdout);
	#endif
	long int a,l;
	long int A,L;
	int test = 1;
	while(cin >> a >>l){
		A=a;
		L=l;
		if(a==-1 && l == -1) break;
		if(A > L) swap(a,l);
		long int cont=0;
		while(true){
			if(a > l) break;
			if(a == 1){ 
				cont++;
				break;
			}
			else if(a%2==0){ 
				a/=2;
				cont++;
			}
			else { 
				a=a*3+1;
				cont++;
			}
		}
		cout<<"Case "<<test<<": A = "<<A<<", limit = "<<L<<", number of terms = "<<cont<<endl;
		test++;
	}
	
return 0;
}
