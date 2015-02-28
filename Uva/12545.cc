#include <iostream>
#include <string>
using namespace std;
int cont_on(string s){
	int cont=0;
	for(int i=0;i<(int)s.size();i++){
		if(s[i]=='1')
			cont++;
		}
	return cont;
	}
int main(){
	int n;
	cin>>n;
	int te =1;
	while(n--){
		string S,T;
		int Sc,Tc;
		cin>>S;
		cin>>T;
		int cc =0,c1=0,c=0;
		Sc=cont_on(S);
		Tc=cont_on(T);
			for(int i=0;i<(int)S.size();i++){
				if(S[i]=='?')
					cc++;
				else if(S[i]=='1' && T[i]=='0')
					c1++;
				else if(S[i]=='0' && T[i]=='1')
					c++;
			}
		if(Sc<=Tc){
				cc+=c>c1? c:c1;
				cout<<"Case "<<te<<": "<<cc<<endl;
		}
		else
			cout<<"Case "<<te<<": "<<-1<<endl;
		te++;
	}
	return 0;
	}
