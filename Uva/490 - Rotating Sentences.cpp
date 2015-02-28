#include <bits/stdc++.h>

using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("in.txt","rt",stdin);
	freopen("out.txt","wt",stdout);
#endif
	char cara[100][100];
	char data[100];
	int max =0;
	int con =0;
	
	//for (int i = 0; i < 100; i++)
		//memset(cara[i], ' ', 100);
	
	while(cin.getline(data,256)){
		int len = strlen(data);
		if(len > max ) max = len;
		
		for(int i=0;i<len;i++){
			cara[con][i]=data[i];
			}
			
			con++;
		}
		
	for(int i=0;i< max;i++){
		for(int j = con-1;j>=0;j--){
			cout<<cara[j][i];
			}
		cout<<endl;
		}

	return 0;
	}

