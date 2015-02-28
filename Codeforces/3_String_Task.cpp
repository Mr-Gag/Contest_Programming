#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		string str ;
		for(int i=0;i<(int)s.size();i++){
			char c = tolower(s[i]);
			if(c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y')
				continue;
			else
				str += c;
		}
		
		
		for(int i=0;i<(int)str.size();i++){
			cout<<'.';
			cout<<str[i];
			}
		cout<<endl;
		}
}
