#include <iostream>
using namespace std;

bool ispal (int num) {
  if (num < 0) return false; 
  int dig = 1;
  while (num / dig >= 10) {
      dig *= 10;
  }
  while (num != 0) {
    int first = num / dig;
    int last = num % 10;
    if (first != last) return false;
    num = (num % dig) / 10;
    dig /= 100;
  }
  return true;
}

int main() {
 // int n1 = 100;
 // int n2 = 100;
  int pal = 0;
  int max = pal;
  for (int n1=100;  n1<1000; n1++) {
    for (int n2=100; n2<1000; n2++) {
      if (ispal(n1*n2)) {
        if (n1*n2 > max) max = n1*n2;
      }
    }
  }
  cout << max << endl;
  return 0;
}
    

