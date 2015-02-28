#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	int data[n];
	int total = 0;
	for(int i=0; i < n; i++){
		cin >> data[i];
		total += data[i];
		}
	sort( data,data+n );
	total /= 2;
	int count = 0;
	int sum = 0;
	for(int i=n-1;i>=0;i--){
		count++;
		sum += data[i];
		if(sum > total)
			break;
	}
	cout << count;
}
