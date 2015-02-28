#include <bits/stdc++.h>
using namespace std;
int main(){
	int x , y ;
	while( scanf("%d %d",&x,&y) == 2 ){
		int dx = 0 , dy = 0 , lap = 1 ;
		while( true ){
			if( (dy-dx) >= x ) break ;
			lap++;
			dx += x , dy += y ;
			//cout<<dx<<" "<<dy<<"  "<<(dy-dx)<<endl;
		}
		printf("%d\n",lap);
	}
	return 0;
}
