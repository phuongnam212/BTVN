#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int seach (int n ,int a[], int key ){
   auto it=  lower_bound(a,a+n,key);
   return it-a;
}

int main() {
    int n;
    cin >> n;
    int arr [n];
    for (int i=0; i< n ;i++){
       cin >> arr [i]; 
    }
    int k;
    cin >> k;
    for ( int i=0;i<k ;i++){
        int key ;
        cin >> key ;
        
       int x=seach(n,arr,key);
       if (arr[x]==key) cout << "Yes " << x+1 << endl;
       else cout << "No " << x+1 << endl;
        
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
