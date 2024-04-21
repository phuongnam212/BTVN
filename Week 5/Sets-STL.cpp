#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int>s;
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        int key , x;
        cin >> key >> x;
        if (key==1){
            s.insert(x);
        }
        else if (key ==2){
            s.erase(x);
        }
        else if (key==3){
            if (s.find(x)!=s.end()) cout << "Yes"<< endl;
            else cout << "No"<< endl;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}



