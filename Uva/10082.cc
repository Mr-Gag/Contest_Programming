#include <iostream>

using namespace std;

int main(){
	string cla="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	string line;
	while(getline(cin,line)){
		string res="";
		for(int i=0;i<(int)line.size();i++){
			for(int j=0;j<(int)cla.size();j++){
				if(line[i]== 'A' || line[i]=='Q' || line[i]=='Z' || line[i]=='`' || line[i]==' '){
					res+=line[i];
					break;
				}
				else if(line[i]==cla[j]){
					res+=cla[j-1];
					break;
				}
			}
		}
		cout<<res<<endl;
	}
	return 0;
	}

