#include <iostream>

using namespace std;
int main(){
	int w;
	while(cin>>w){
		int res = w - 2;
		if(res%2==0 && res!=0) cout<<"YES";
		else cout<<"No";
		cout<<endl;
		}
}
