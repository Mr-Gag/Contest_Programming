#include <iostream>
#include <sstream>
#include <string>
#include <map>
using namespace std;
string IntoRoman(int n){
	string roman;
	string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
	string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
	string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
	string thousands[] = {"", "M", "MM", "MMM"};
	int o= n%10;
	n/=10;
	int t=n%10;
	n/=10;
	int h=n%10;
	n/=10;
	int th =n%10;
	roman += thousands[th]+hundreds[h]+tens[t]+ones[o];
	return roman;
	}
int main(){
	string n;
	map<string,string> m;
	for(int i=1;i<4000;i++){
		string roman = IntoRoman(i);
		stringstream strm;
		string num;
		strm << i; //conver int to string
		strm >> num; 
		m[roman] = num;
		m[num] = roman;
		}
		while(cin>>n){
			cout<<m[n]<<endl;
			}
	return 0;
	}


