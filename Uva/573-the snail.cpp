#include <iostream>

using namespace std;

int main(){
	float H,U,D,F;
	int day;
	double hi;
	bool res;
	while(cin >> H >> U >> D >> F){
		if(H == 0) break;
		F=U*(F/100);
		day =0;
		hi =0 ;
		while(true){
			day++;
			hi += U;
			U-=F;
			if(U<0) U=0;
			if(hi > H){ res = true; break;}
			hi -= D;
			if(hi < 0){ res = false; break;}
			}
		cout<<(res ? "success" : "failure")<<" on day "<<day<<endl;
	}
	return 0;
	}
