#include <iostream>

using namespace std;
int white(char c){
	int w=0;
	if(c=='B' || c=='N')
		w+=3;
	else if(c=='Q')
		w+=9;
	else if(c=='R')
		w+=5;
	else if(c=='P')
		w+=1;
	return w;
	}
int black(char c){
	int b=0;
	if(c=='b' || c=='n')
		b+=3;
	else if(c=='q')
		b+=9;
	else if(c=='r')
		b+=5;
	else if(c=='p')
		b+=1;
	return b;
	}
int main(){
	int w=0,b=0;
	char c;
	for(int i=0;i<8;i++)
		for(int j=0;j<8;j++){
			cin>>c;
			if(c>=65 && c<=90)
				w+=white(c);
			else if(c>=97 && c<=122)
				b+=black(c);
			else
				continue;
			}
	if(w>b)
		cout<<"White"<<endl;
	else if(w<b)
		cout<<"Black"<<endl;
	else
		cout<<"Draw"<<endl;
	return 0;
}
