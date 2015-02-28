#include <bits/stdc++.h>

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("in.txt","rt",stdin);
		freopen("out.txt","wt",stdout);
	#endif
	char c;
	int cont =0;
	while((c = getchar()) != EOF){
		
		if(c >= '0' && c <= '9')
			cont += c - '0';
		else if(c == 'b'){
			for(int i=0; i< cont; i++) 
				cout<<' ';
			cont=0;
			}
		else if(c == '!')
		 cout<<"\n";
		else if(c == '\n')
			cout << c;
		else {
			for(int i=0;i<cont;i++)
				cout<<c;
			cont =0;
		}
	}
	
	return 0;
}
