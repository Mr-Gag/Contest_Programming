#include <iostream>
#include <sstream>
#include <cstdio>
#include <vector>
using namespace std;
double todouble(string s){
	double k;
	istringstream iss(s);
	iss>>k;
	return k;
	}
int main(){
	int n;
	cin>>n;
	while(n--){
		vector<int> ind;
		vector<char> mod;
		string str,s;
		cin>>str;
		for(int i=0;i<(int)str.size();i++){
			s="";
			if(isdigit(str[i])){
				for(int j=i;j<(int)str.size();j++){
					if(!isdigit(str[j])){
						i=j-1;
						break;
						}
					else
						s+=str[j];
				}
				ind.push_back(todouble(s));
			}
			else{
				mod.push_back(str[i]);
				if(!isdigit(str[i+1]))
					ind.push_back(1);
			}
		}
		double res = 0.0;
		for(int i=0;i<(int)mod.size();i++){
			if(mod[i]=='C')
				res+= 12.01 * ind[i];
			else if(mod[i]=='H')
				res+= 1.008 * ind[i];
			else if(mod[i]=='O')
				res+= 16.00 * ind[i];
			else if(mod[i]=='N')
				res+=14.010 * ind[i];
			}
		printf("%.3lf\n",res);
	}
	return 0;
	}
