#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(){
	freopen("detect.in","rt",stdin);
	freopen("detect.out","wt",stdout);
	string str;
	int res;
	while(getline(cin,str)){
		if(str == "#")
			break;
		res = 0;
		for(int i=0;i<(int)str.size();i++){
			char c = str[i];
			if(c !=' ' && c < 91 && c > 64 )
				res += (c - 64)*(i+1);
			}
		cout<<res<<endl;
		}
}
