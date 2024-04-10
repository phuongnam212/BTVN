#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


/*bool testgame(char arr[][1000],int h, int w){
    for (int i=0;i<w;i++){
        if (arr[h-1][i]=='Y') return true ;
        
}
    return false;
    
}
*/
int main() {
    
    int h ,w;
    cin >> w >> h ;
    char a[h][w];
    for (int i =0; i<h ; i++){
        for (int j=0;j < w;j++){
            cin >> a[i][j];
        }
    }
    for (int i =0; i<h ; i++){
        for (int j=0;j < w;j++){
            if (a[i][j]=='Y' ){
                if (j-1>=0 && a[i][j-1]=='E'&&a[i+1][j-1]=='E') a[i+1][j-1]='Y';
                if (j+1<=w-1&& a[i][j+1]=='E'&&a[i+1][j+1]=='E') a[i+1][j+1]='Y';
                if (a[i+1][j]=='E') a[i+1][j]='Y';
            }
        }
    }
        for (int i=0;i<w;i++){
            if (a[h-1][i]=='Y') {
                cout << "YES" << endl;
                break;
            }
            if (i==w-1) cout << "NO"<< endl;
        }
   
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
