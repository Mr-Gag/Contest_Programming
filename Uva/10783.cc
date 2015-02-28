#include <iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	int a,b,cont,tes=1;
	while(t--){
		cont = 0;
		cin>>a>>b;
		for(int i=a;i<=b;i++)
			if(i%2!=0)
				cont+=i;
		cout<<"Case "<<tes<<": "<<cont<<endl;
		tes++;
		}
	return 0;
	}
