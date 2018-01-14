#include <iostream>
#include <string>
//#include <istream>
//#include <sstream>
//#include <fstream>
using namespace std;

int main () {
  long long int num;
  cin >> num;
  //getline (cin, num);
  //cin.ignore (1000, '\n');
 // long long int num = 600851475143;
  int fac = 2;
  int prime = 0;

  while (num > 1) {
    if (num%fac == 0) {
       num /= fac ;
       prime = fac;
       fac = 2;
    }
    else fac++; 
  }
  cout << prime << endl;
  return 0;
}
