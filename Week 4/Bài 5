#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
          int n;
    cin >> n;
    int a1[n],a2[n+1];
    for (int i=0;i<n;i++){
        cin >> a1[i];
}
      for (int i=0;i<n+1;i++){
        cin >> a2[i];
}
    sort (a1,a1+n);
    sort (a2,a2+n+1);
    bool h= true;
    for (int i=0;i<n;i++){
        if (a1[i]!=a2[i]) {
            cout << a2[i];
            h=false ;   
            break;
    }
    }
    
        if (h){
    cout << a2[n];
        }
    
    return 0;
}

