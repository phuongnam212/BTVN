#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int main (){
    int n, q;
    cin >> n >> q;
    int k=0;
    int * arr[n];
    while (n--){
        int size ;
        cin >> size ;
        arr [k]=new int [size];
        for ( int i=0;i < size ;i++){
            cin >> arr[k][i];
        }
        k++;
    }
    for (int i=0;i<q;i++){
        int m,n;
        cin >> m >> n;
        cout << arr [m][n] << endl;
    }
}
