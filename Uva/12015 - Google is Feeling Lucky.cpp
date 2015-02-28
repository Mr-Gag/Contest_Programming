#include <bits/stdc++.h>

using namespace std;

bool starts_with_www(const string &s) {
  if (s.size() > 3 && string(s.begin(), s.begin() + 4) == "www.")
    return true;
    
  return false;
}

bool theTruthIsOutThere(const pair<string,int> &a, const pair<string,int> &b) {
 if (a.second == b.second) {
    if (starts_with_www(a.first) && starts_with_www(b.first)) {
      return a.first < b.first;
    } else if (starts_with_www(a.first) && !starts_with_www(b.first)) {
      return true;
    } else if (!starts_with_www(a.first) && starts_with_www(b.first)) {
      return false;
    } else {
      return a.first < b.first;
    }
  }

  return a.second > b.second;
}

int main(){
	int cases;
	string url;
	int rev;
	vector < pair <string, int> > data;
	cin >> cases;
	for(int T=0; T < cases; T++){
		data.clear();
	for(int i=0; i < 10; i++){
		cin >> url >> rev;
		data.push_back( make_pair( url, rev ));
		}
		sort( data.begin(), data.end(),theTruthIsOutThere);
		cout<<"Case #"<<(T+1)<<":"<<endl;
		int best = data[0].second;
		for(int i = 0; i <10; i++){
			if(data[i].second < best) break;
			cout << data[i].first <<endl;
			}
	}
	return 0;
	}
