#include <iostream>
using namespace std;

int main() {
  for (char i = 'a'; i <= 'd'; i++) {
    for (char j = 'a'; j <= 'd'; j++) {
      for (char k = 'a'; k <= 'd'; k++) {
        cout << i << j << k << endl;
      }
    }
  }

  return 0;
}
