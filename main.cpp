#include <iostream>
#include "lib.h"
using namespace std;
int main(){
  char c;
  cout << "inserisci un carattere";
  cin >> c;
  if (carattere(c)) {
      cout << c;
  }
  else {
      cout << "errore";
  }
  return 0;
}
