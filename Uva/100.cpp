#include <cstdio>
#include <algorithm>
 
using namespace std;
 
int main ()
{
    int i, j;
 
    while ( scanf ("%d %d", &i, &j) != EOF ) {
 
        int temp_i = i;
        int temp_j = j;
 
        if ( i > j ) swap (i, j);
 
        int maxc = 0;
        int cycle;
 
        while ( i <= j ) {
            unsigned int n = i;
            cycle = 1;
 
            while ( n != 1 ) {
                if ( n % 2 == 1 ) n = 3 * n + 1;
                else n /= 2;
                cycle++;
            }
 
            if ( cycle > maxc )
                maxc = cycle;
 
            i++;
        }
 
        printf ("%d %d %d\n", temp_i, temp_j, maxc);
    }
 
    return 0;
}
