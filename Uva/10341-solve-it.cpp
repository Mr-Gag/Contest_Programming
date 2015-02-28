#include <bits/stdc++.h>
#define EPS 1e-8
using namespace std;
int p,q,r,s,t,u;
double f(double x){
	return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*pow(x,2) + u;
	}
double bitsection(){
	double lo = 0, hi = 1;
	double x;
	while( lo + EPS < hi){
		x = (lo + hi) / 2;
		if(f(lo) * f(x) <= 0)
			hi = x;
		else 
			lo = x;
		}
	return x;
	}
int main(){
	while(cin >> p >> q >> r >> s >> t >> u){
		if( f(0) * f(1) > 0 ) 
			cout << "No solution" << endl;
		else 
			printf("%.4f\n", bitsection());
		}
	return 0;
	}
