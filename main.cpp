// Encontrar triples pitagoricos
#include <iostream>
#include <cmath>
using namespace std;

void encontrar_triples_pitagoricos() {
  for (int a; a < 20; a++){
      cout << "a: " << a << endl;
      cin >> a;
      for (int b; b < 20; b++){
            cout << "b: " << b << endl;
            cin >> b;
          for (int c; c < 20; c++){
              if (sqrt(a^2 + b^2) == c){
                  cout << a << " " << b << " " << c << endl;
              }
          }
      }
  }
}

int main() {
    encontrar_triples_pitagoricos();
    return 0;
}
