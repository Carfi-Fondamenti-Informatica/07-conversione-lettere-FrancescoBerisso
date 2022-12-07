#include <iostream>

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
