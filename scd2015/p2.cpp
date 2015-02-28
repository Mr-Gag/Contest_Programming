#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	//freopen("jeu.in","rt",stdin);
	//freopen("jeu.out","wt",stdout);
	int n ,val;
	while(cin >> n ){
		if(n==0) break;
		vector<int> data;
		for(int i=0;i<n;i++){
			cin>>val;
			data.push_back(val);
		}
		
		int max =  *max_element(data.begin(),data.end());
			int res=0;
		while((int)data.size() >= 3){
			int index;
			for(int i = 0; i<(int)data.size();i++){
				if(max==data[i])
					index = i;
			}
			if(index==0 || index == ((int)data.size()-1)){
				res+=data[index]+data[abs(index-1)]+data[abs(index-2)];
				data.erase(data.begin()+ abs(index-1));
			}
			else if(index+1==((int)data.size()-1) || index-1==0){
				if(index-1==0){
					if((int)data.size()!=3)
						res+=data[index]+data[abs(index+1)]+data[abs(index+2)];
					else
						res+=data[index]+data[abs(index-1)]+data[abs(index+1)];
						data.erase(data.begin()+abs(index+1));
				}
				else{
					if((int)data.size()!=3)
						res+=data[index]+data[abs(index-1)]+data[abs(index-2)];
					else
						res+=data[index]+data[abs(index-1)]+data[abs(index+1)];
					data.erase(data.begin()+abs(index-1));
				}
			}
			else{
				if(data[index-1] < data[index+1]){
					res+=data[index]+data[abs(index-1)]+data[index-2];
					data.erase(data.begin()+abs(index-1));
				}
				else{
					res+=data[index]+data[index+1]+data[index+2];
					data.erase(data.begin()+(index+1));
				}
			}
		}
		cout<<res<<endl;
		data.clear();
	}	
}
