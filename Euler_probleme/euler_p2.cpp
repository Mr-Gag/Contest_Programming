#include <iostream>

using namespace std;
int main(void){
	long long sum=0;
	long long first = 0, second = 1, next ;
	while(next < 4000000){
		next= first + second;
		first = second;
		second = next;
		if(next%2==0)
			sum += next;
		}
	cout << sum;
	return 0;
	}
