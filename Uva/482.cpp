#include <iostream>
#include <cstdio>
#include <utility>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	freopen("482.in","rt",stdin);
	vector<pair <int,string> > data;
	int n;
	string line1, line2;
	cin >> n;
	getchar();
	
	while(n--){
		getchar();
		getline(cin,line1);
		getline(cin,line2);
		istringstream ind(line1);
		istringstream ival(line2);
		int index;
		string val;
		
		while(ind >> index){
			ival >> val;
				data.push_back(pair <int,string>(index,val));
			}
			
		sort(data.begin(), data.end());
		
		for(int it=0;it<(int)data.size();it++)
			cout<<data[it].second<<endl;
		
		cout<<endl;
		data.clear();
		}
	return 0;
	}
