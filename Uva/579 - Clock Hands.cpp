
#include <bits/stdc++.h>

using namespace std;

float H, M;
 
int main() {
    for(;;) {
        scanf("%f:%f", &H, &M);
        if(H == 0 && M == 0) break;
 
        if(H == 12) H = 0;
        
        float ha = 30.0 * H + (M / 2) ;
        float ma = M * 6.0;
        
        if(abs(ha - ma) > 180)  
			printf("%.3f\n",360.0 - abs(ha - ma));
        else  
			printf("%.3f\n",abs(ha - ma));
    }
    return 0;
}
