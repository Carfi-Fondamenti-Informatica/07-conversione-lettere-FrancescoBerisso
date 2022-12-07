#include <iostream>
#include "lib.h"
using namespace std;
int main(){
  char c;
  cin >> c;
  if (carattere(c) == true) {
      cout << c;
  }
  else {
      cout << "errore";
  }
  return 0;
}
