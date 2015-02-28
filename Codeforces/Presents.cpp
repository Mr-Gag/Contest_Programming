#include <iostream>
#include <sstream>
using namespace std;

int main(){
	int N;
	cin >> N;
	int index;
	int data[N];
	for(int i=0; i < N; i++){
		cin >> index;
		data[index]=i+1;
	}
	for(int i=1; i <= N; i++){
		cout<<data[i]<<" ";
	}
	return 0;
}
