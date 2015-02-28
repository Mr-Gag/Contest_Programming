#include <iostream>

using namespace std;

int main(){
	int n;
	int sum;
	while(cin>>n){
		sum=0;
		for(int i=1;i<=n;i++){
			if(i%2!=0)
				sum+=1;
			else
				sum+=2;
			}
		cout<<sum<<endl;
		}
	return 0;
	}
