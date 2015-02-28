+#include <bits/stdc++.h>

using namespace std;

int main(){
	/*char a = 'J' , b= 'C';
	cout<<(int) a << " "<< (int) b<<endl;*/
	string s;
	while(cin >> s){
		char out;
		for(int i=0; i< (int)s.size();i++){
			out = s[i]-7;
			cout<<out;
			}
		cout<<endl;
		}
	return 0;
	}
