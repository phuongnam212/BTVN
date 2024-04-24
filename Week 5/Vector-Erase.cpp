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
    s.erase(s.begin()+(a-1));
    s.erase(s.begin()+(b-1),s.begin()+(c-1));

    cout << s.size()<< endl;
    for (int i=0;i< n-(c-b+1);i++){
        cout << s[i] << " ";
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
