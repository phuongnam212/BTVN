#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; cin >> n;
    vector <int> s;
    for (int i=0;i<n;i++){
        int k; cin >> k;
        s.push_back(k);
    }
    int a,b,c;
    cin >> a >> b >> c;
    
    //s.erase(s.begin()+(a-1));
    s.erase(b-1,c-2);
    cout << a+(c-b-1);
    for (int i=0;i< n-2;i++){
        cout << s[i] << " ";
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
