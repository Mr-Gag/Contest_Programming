#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int def(vector<int> data,vector<int> data1,int n){
	int val;
		for(int i=0;i<n;i++){
			if(data[i]!=data1[i]){
				val=data[i];
				break;
			}
			else
				val = data[i+1];

		}
	return val;
}
int main(){
	vector<int> data,data1,data2;
	vector<int>::iterator it;
	int n,val,a,b;
	cin>>n;
		for(int i=0;i<n;i++){
			cin>>val;
			data.push_back(val);
			}
		for(int i=0;i<(n-1);i++){
			cin>>val;
			data1.push_back(val);
			}
		for(int i=0;i<(n-2);i++){
			cin>>val;
			data2.push_back(val);
			}
		sort(data.begin(),data.end());
		sort(data1.begin(),data1.end());
		sort(data2.begin(),data2.end());
		a = def(data,data1,(n-1));
		b = def(data1,data2,(n-2));
		cout<<a<<"\n"<<b<<endl;
	return 0;
}
