#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string a,b;
  cin >> a >>b ;
  cout << a.size() << " "<< b.size() << endl;
  cout << a+b<< endl ;
  string c,d;
  c=a;
  d=b;
   c= b[0]+c.erase(0,1);
  d=a[0]+d.erase(0,1);
   cout << c << " " << d;
   
      return 0;
}
