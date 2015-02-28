#include <bits/stdc++.h>

using namespace std;


int main() {
	int start_s=clock();
	freopen("../pal.in","rt",stdin);
	int T,N,M;
	string s;
	string data;
	string res;
	int cases =0;
	cin >> T;
	while(T--){
		res.clear();
		cases++;
		cin >> N >> M;
		cin>> s;
		for(int i=0;i<N;i+=M){
			data.clear();
			int m = M +i;
			for(int j=i;j<m;j++){
				data+=s[j];  
			}
			res = data + res;
			}
			cout<<"Case "<<cases<<": ";
			if(s.compare(res) == 0) cout<<"Yes"<<endl;
			else cout <<"No"<<endl;
		}
int stop_s=clock();
cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
return 0;
}
