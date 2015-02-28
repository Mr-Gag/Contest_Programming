#include <iostream>
#include <cstdio>
#include <algorithm> 
using namespace std; 

int main(){
    long long int r,g,b;
    cin>>r>>g>>b;
    cout<<min(r+g,min(g+b,min(r+b,(r+g+b)/3)));
    return 0;
}
