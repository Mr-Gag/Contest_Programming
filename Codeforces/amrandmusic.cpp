#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int val;
	vector<int> data;
	for(int i=0;i<n;i++){
		cin>>val;
		data.push_back(val);
	}
	vector<int>::iterator it;
	it = unique(data.begin(),data.end());
	data.resize(distance(data.begin(),it));
	sort(data.begin(),data.end());
	cout<<(int)data.size()<<endl;
	for(int i=0;i<(int)data.size();i++)
		cout<<data[i]<<" ";
}
