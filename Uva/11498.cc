#include <iostream>
using namespace std;

int main(){
	while(true){
		int k,n,m,x,y;
		cin>>k;
		if(k==0) break;
		cin>>n>>m;
		while(k--){
			cin>>x>>y;
			if(x==n || y == m)
				cout<<"divisa"<<endl;
			else if(x < n && y > m)
				cout<<"NO"<<endl;
			else if(x > n && y > m)
				cout<<"NE"<<endl;
			else if(x < n && y < m)
				cout<<"SO"<<endl;
			else if(x > n && y < m)
				cout<<"SE"<<endl;
			}
	}
	return 0;
	}

