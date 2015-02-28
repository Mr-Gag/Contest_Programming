#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	string data;
	while(cin>> data){
		vector<int> math;
		istringstream iss(data);
		int val;
		while(iss>>val){
			math.push_back(val);
			}
		sort(math.begin(),math.end());
		for(int i=0;i<(int)math.size();i++){
			cout<<math[i];
			if(i != (int)math.size()-1)
				cout<<"+";
			}
		cout<<endl;
		}
	
}
