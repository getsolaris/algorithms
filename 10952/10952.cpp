#include <iostream>
#include <string>

using namespace std;

int A, B;

int main() {
  while (cin >> A >> B) {
    if (A == 0 && B == 0) {
      break;
    }
    
    cout << A + B << endl;
  }
}
