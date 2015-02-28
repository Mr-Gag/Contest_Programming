#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		string str;
		cin>>str;
		int cont =0, sum = 0;
		for(int i=0;i<(int)str.size();i++){
			if(str[i]=='O')
				cont++;
			else{
				cont=0;
			}
			sum+=cont;
			}
		cout<<sum<<endl;
		}
	return 0;
	}
