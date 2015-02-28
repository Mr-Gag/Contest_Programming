
#include <bits/stdc++.h>

using namespace std;

int main(){
	/*#ifndef ONLINE_JUDGE
		freopen("in.txt","rt",stdin);
		freopen("out.txt","wt",stdout);
	#endif*/
	int T;
	int H,F;
	cin >> T;
	while(T--){
		cin >> H;
		cin >> F;
		while(F--){
		int k=0;
		for(int i=0;i< H+1;i++){

			 for(int j=i;j;j--)
				cout<<k;
			k++;
			 for(int j=H;j;j--)
				cout<<" ";  
			cout<<endl;
		}
		k=H-1;
		for(int i=0;i<H-1;i++)
		{
			for(int j=i;j<H-1;j++)
			{
				cout<<k;
			}
			k--;
			cout<<"\n";
		}
		}
	}
	return 0;
}
