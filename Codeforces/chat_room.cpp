#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	string str;
	cin >> str;
	string key = "hello";
	int ans=0;
	int l=0;
	for(int i=0;i < (int)key.size();i++){
		for(int j=l;j<(int)str.size();j++){
			if(key[i]== str[j]){
				l=j+1;
				ans++;
				break;
				}
			}
		}
	if(ans == 5)
		cout << "YES";
	else
		cout << "NO";
}
