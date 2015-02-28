#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int a, b, s;
	cin>>a>>b>>s;
	a=abs(a);
	b=abs(b);
	int r = abs(a + b);
	if(r == s){
		cout<<"Yes";
	}
	else if(s>r){
		if(s%2==0 && r%2==0)
			cout<<"Yes";
		else if(s%2!=0 && r%2!=0)
			cout<<"Yes";
		else 
			cout<<"No";
		}
	else 
		cout<<"No";
}
