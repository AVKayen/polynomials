#include <iostream>
#include "polynomials.cpp"

using namespace std;

int main() {
    double values1 = {1.0, 2.0, 3.0};
    double values2 = {4.0, 7.0, 11.33, 8.41}
    polynomial poly1, poly2;
    poly1.level = 3;
    poly2.level = 4;
    poly1.values = values1;
    poly2.values = values2;
    poly1 // 1 + 2x + 3x^2
    poly2 // 4 + 7x + 11.33x^2 + 8.41x^3
    polynomial poly3 = add(poly1, poly2);
    cout << get_level(poly3);
    for(int i = 0; i < get_level(poly3); i++) {
        cout << endl << get_value(poly3, i);
    }
    return 0;
}