#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(){
	//freopen("10420.in","rt",stdin);
	int n;
	cin>>n;
	string line;
	vector<string> data;
	multimap<int,string> m;
	multimap<int,string>::iterator it ;
	for(int i=0;i<n;i++){
		getline(cin,line);
		getline(cin,line,' ');
		data.push_back(line);
		}
	sort(data.begin(),data.end());
	int cont = 1;
	for(int i=0;i<=(int)data.size()-2;i++){
		if(data[i]==data[i+1])
			cont++;
		else
			cont=1;
		m.insert(make_pair(cont,data[i]));
		}
	//sort(m.begin(),m.end());
	for(it = m.begin();it!=m.end();it++){
		cout<<it->second<<" "<<it->first<<endl;
		}
	return 0;
	}

