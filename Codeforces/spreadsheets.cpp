#include <string>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
	int N;
	cin>>N;
	string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while(N--){
		string line,R,C;
		int Nr,Nc;
		cin>>line;
		istringstream iss(line);
		iss>>R>>Nr>>C>>Nc;
		cout<<C<<R;
		if(R=="R" && C=="C"){
			if(Nc >= 26){
				int i = Nc/26;
				cout<<alph[i];
				while(Nc>=26)
					Nc-=26;
				cout<<alph[Nc];
				cout<<Nr;
			}
		}
	cout<<endl;
	}
}
