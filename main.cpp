#include <iostream>
#include "polynomials.cpp"

using namespace std;

int main() {
    double values1[3] = {1.0, 2.0, 3.0};
    double values2[4] = {4.0, 7.0, 0.0, 5};
    polynomial poly1{}, poly2{};
    poly1.level = 3;
    poly2.level = 4;
    poly1.values = values1;
    poly2.values = values2;
    polynomial poly3 = multiply(poly1, poly2);
    cout << get_level(poly3) << endl;
    for(int i = 0; i < get_level(poly3); i++) {
        cout << get_value(poly3, i) << "x^" << i << " + ";
    }
    return 0;
}