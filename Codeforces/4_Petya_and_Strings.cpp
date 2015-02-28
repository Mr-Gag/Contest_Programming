#include <iostream>
#include <string>
using namespace std;
string Tolower(string str){
	string Lstr;
	for(int i=0;i<(int)str.size();i++){
		char c = tolower(str[i]);
		Lstr += c;
		}
	return Lstr;
	}
int main(){
	string str1;
	string str2;
	while(cin>>str1){
		cin>>str2;
		str1 = Tolower(str1);
		str2 = Tolower(str2);
		if(str1>str2)
			cout<<"1";
		else if(str1<str2)
			cout<<"-1";
		else
			cout<<"0";
		cout<<endl;
	}
}
