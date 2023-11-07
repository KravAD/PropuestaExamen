// Encontrar triples pitagoricos
#include <iostream>
#include <cmath>
using namespace std;
int a, b, c;
void encontrar_triples_pitagoricos() {
  for (int a; a < 20; a++){
      for (int b; b < 20; b++){
          for (int c; c < 20; c++){
              if (sqrt(a^2 + b^2) == c){
                  cout << "Dame valor de a: " << endl;
                  cin >> a;
                    cout << "Dame valor de b: " << endl;
                    cin >> b;
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
