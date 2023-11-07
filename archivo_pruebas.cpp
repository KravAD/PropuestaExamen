#include <iostream>
#include <cmath>
using namespace std;
int a, b, c;
int main(){
    int valor_max = 20;
    for (int a; a < valor_max; a++){
        for (int b; b < valor_max; b++){
            for (int c; c < valor_max; c++){
                if (sqrt(a^2 + b^2) == c){

                }
            }
        }
    }
    cout << "valor a: " << endl;
    cin >> a;
    cout << "valor b: " << endl;
    cin >> b;
    cout << "valor c: " << endl;
    cin >> c;
    cout << a << " " << b << " " << c << endl;
    return 0;
}