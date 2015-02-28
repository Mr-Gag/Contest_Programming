#include <cstdio>
#include <algorithm>
#define LL unsigned long long int 
using namespace std;
 
int main ()
{
    	int T;
	LL a,b;
	scanf("%d",&T);
	while(T--){
	scanf("%llu %llu",&a,&b);
	if(a==b)
		printf("=\n");
	else if(a<b)
		printf("<\n");
	else 
		printf(">\n");
	}	
	return 0;
}
