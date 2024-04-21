#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    map< string ,int > mp;
    for (int i=0;i<n;i++){
        int k; cin >> k;
        string ten;
        if (k==1){
            int diem;
            cin >> ten >> diem;
         mp[ten]+=diem;
        }
        else if (k==2){
            cin >> ten;
            mp.erase(ten);
        }
        else if (k==3){
            cin >> ten;
            map<string,int>::iterator itr=mp.find(ten);
            if (itr!=mp.end()) cout << mp[ten] << endl ;
            else cout << 0 << endl;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}



