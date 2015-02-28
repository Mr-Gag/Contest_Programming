#include <bits/stdc++.h>
using namespace std;

bool sorted(const pair<int,int> &a, const pair<int,int> &b){
	return a.second < b.second;
	}

string convertdate(int date){
	int h = date / 60;
	int m = date % 60;
	stringstream ss;
	if(m<10)
		ss << h <<":0" << m;
	else
		ss << h <<":" << m;
	 string str = ss.str();
	 return str;
	}

int main(){
	int T;
	vector < pair<int,int> > data;
	pair<int,int> resulta;
	freopen("in.txt","rt",stdin);
	freopen("out.txt","wt",stdout);
	int N = 1;
	while(cin >> T){
		/// 
		int begin = 10*60;
		int end = 18*60;
		while(T--){
			int h1,h2,m1,m2;
			char x;
			cin >> h1 >> x >> m1;
			int date1 = h1*60 + m1;
			cin >> h2 >> x >> m2;
			int date2 = h2*60 + m2;
			cin.ignore(1000,'\n');
			if(date1 < end) 
				end = date1;
			if(date2 > begin)
				begin = date2;
			data.push_back(make_pair(date1,date2));
			}
			///
			if (end != 10 * 60)
				data.push_back(make_pair(10*60, 10*60));
			if (begin != 18 * 60)
				data.push_back(make_pair(18*60, 18*60));
			sort(data.begin(), data.end(), sorted);
			///
			resulta.second = 0;
			for (int i = 1, sz = data.size(); i < sz; i++) {
			  if (data[i].first - data[i-1].second > resulta.second) {
				resulta.first = data[i-1].second;
				resulta.second = data[i].first - data[i-1].second;
			  }
			}
			///
			cout<<"Day #"<<N<<": the longest nap starts at "<<convertdate(resulta.first);
			if(resulta.second > 60)
				cout<<" and will last for "<< resulta.second / 60 <<" hours and "
				<< resulta.second % 60<<" minutes.";
			else 
				cout<<" and will last for "<< resulta.second<<" minutes.";
			cout<<endl;
			
			data.clear();
			N++;
		}
	return 0;
	}
