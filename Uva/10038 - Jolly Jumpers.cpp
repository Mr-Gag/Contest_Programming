#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int *num;
	vector<int> p;
	num = new int[3000];
	while(cin >> n){
		if(n == 0){
			cout << "Not jolly" << endl;
			continue;
			}
		p.clear();
		for(int i =0;i < n; i++){
			cin >> num[i];
			if(i>0) p.push_back(abs(num[i]-num[i-1]));
			}
			sort(p.begin(),p.end());
			bool res = true;
			for(int i=0; i < (int) p.size(); i++){
				if(p[i]!=i+1){
					res = false;
					break;
					}
				}
		if(res) cout << "Jolly" << endl;
		else cout << "Not jolly" << endl;
		}
	return 0;
	}
