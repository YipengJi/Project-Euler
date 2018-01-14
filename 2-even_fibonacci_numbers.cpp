#include <iostream>
using namespace std;

int main () {
  int sum = 0;
  for (int fib = 1, init = 1, temp = 0; fib<4000000; temp=fib,  fib+=init, init=temp) {
  //  cout << fib << endl;
    if (fib%2 == 0) sum += fib;
  }
  cout << sum << endl;
  return 0;
}
