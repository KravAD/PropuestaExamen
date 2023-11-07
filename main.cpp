// Encontrar triples pitagoricos
#include <iostream>
#include <cmath>
using namespace std;
int a, b;
void encontrar_triples_pitagoricos(){
    for (int a; a < 20;){
        for (int b; b < 20;){
            for (int c; c < 20;){
                if (sqrt(a^2 + b^2) == c){
                    cout << a << " " << b << " " << c << endl;
                }
            }
        }
    }
}



int main() {
    cout << "a: " << endl;
    cin >> a;
    cout << "b: " << endl;
    cin >> b;
       encontrar_triples_pitagoricos();
    return 0;
}
