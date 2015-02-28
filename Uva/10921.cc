#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	string line;
	freopen("t.in","rt",stdin);
	while(cin>>line){
		for(int i=0;i<(int)line.size();i++){
			if(line[i]=='-'|| line[i]=='1'||line[i]=='0')
				cout<<line[i];
			else if(line[i]>='A'&&line[i]<='C')
				cout<<2;
			else if(line[i]>='D'&&line[i]<='F')
				cout<<3;
			else if(line[i]>='G'&&line[i]<='I')
				cout<<4;
			else if(line[i]>='J'&&line[i]<='L')
				cout<<5;
			else if(line[i]>='M'&&line[i]<='O')
				cout<<6;
			else if(line[i]>='P'&&line[i]<='S')
				cout<<7;
			else if(line[i]>='T'&&line[i]<='V')
				cout<<8;
			else if(line[i]>='W'&&line[i]<='Z')
				cout<<9;
			}
		cout<<endl;
		}
	return 0;
	}

