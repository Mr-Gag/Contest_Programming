#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	freopen("in.txt", "rt", stdin);
	freopen("out.txt", "wt", stdout);
	char c;
	bool cont = true;
	while((c = getchar()) != EOF){
		if(c == '"'){
			if(cont){	
				printf("``");
				cont = false;
				}
			else {
				printf("\'\'");
				cont = true;
				}
			}
		else 
			printf("%c",c);
		}
	return 0;

}
