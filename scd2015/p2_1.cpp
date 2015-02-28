#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;
vector<int> resulta;
void solve(vector<int> data,int i,int val){
	if((int)data.size() < 3 )
		return;
		val+=data[i-1]+data[i]+data[i+1];
		resulta.push_back(val);
	}
int main(){
	//freopen("jeu.in","rt",stdin);
	//freopen("jeu.out","wt",stdout);
	int n ,val;
	while(cin >> n ){
		if(n==0) break;
		vector<int> data;
		vector<int> cc;
		
		for(int i=0;i<n;i++){
			cin>>val;
			data.push_back(val);
		}
		
		for(int i=1;i<(int)data.size()-1;i++){
			val =0;
			cc = data;
			data.erase(cc.begin()+ i);
			solve(cc,i,val);
			for(int i=1;i<(int)data.size()-1;i++){
				cc=cc;
				solve(cc,i,resulta[i-1]);
				cc.erase(cc.begin()+ i);
				cc.clear();
			}
			cc.clear();
			}
		int max =  *max_element(resulta.begin(),resulta.end());
		cout<<max<<endl;
	data.clear();
	resulta.clear();
	}
}

