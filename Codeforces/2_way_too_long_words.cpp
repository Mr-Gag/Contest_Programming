#include <iostream>
#include <string>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s.size()>10)
			cout<<s[0]<<((int)s.size()-2)<<s[s.size()-1];
		else
			cout<<s;
		cout<<endl;
		}
}
