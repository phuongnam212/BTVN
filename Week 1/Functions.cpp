#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
 int max_of_four (int a,int b,int c,int d) {
     int maxi=a;
     int k [4]={a,b,c,d};
     for (int i=0;i<3;i++){
         maxi= max (maxi,k[i+1]); 
     }
     return maxi;
 }
 
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
