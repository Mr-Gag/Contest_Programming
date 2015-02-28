#include <iostream>
#include <string>
#include <sstream>
using namespace std;
bool lucky(int val){
	ostringstream foo;
	foo << val;
	string str = foo.str();
	bool test = true;
		for(int i=0;i<(int)str.size();i++){
			if(str[i]=='7'|| str[i] =='4'){
				test = true;
			}
			else{
				test = false;
				break;
			}
		}
	if(test)
		return true;
	else
		return false;
	}
int main(){
	int val;
	bool test = false;
	cin>>val;
	if(lucky(val)){
		cout<<"YES";
		return 0;
	}
	else{
		for(int i=1;i<1000;i++){
			if(val%i==0){
				if(lucky(val/i)){
					test = true;
					break;
				}
			}
		}
	}
	if(test)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
