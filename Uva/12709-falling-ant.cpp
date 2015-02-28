#include <bits/stdc++.h>

using namespace std;
int main(){
	int n;
	int l,w,h;
	vector < pair<double,int> > v;
	while(cin >> n){
		if(n==0) break;
		while(n--){
			cin >> l >> w >> h;
			double f = 9.81 - 9.81/(2*h);
			v.push_back(make_pair(f,(l*w*h)));
			}
			sort(v.begin(),v.end());
		cout<<v[v.size()-1].second<<endl;
		v.clear();
		}
	
	return 0;
	}
