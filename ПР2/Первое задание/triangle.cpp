#include <iostream>
#include <cmath>
#include "triangle.h";
using namespace std;
bool triangle::exst_tr() {
    return ((a + b > c) && (b + c > a) && (a + c > b));
}
double triangle::perimetr() {
    double p = a + b + c;
    return p;
}
double triangle::square() {
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}
void triangle::show() {
    cout << "1 �������: " << a << endl;
    cout << "2 �������: " << b << endl;
    cout << "3 �������: " << c << endl;
}
void triangle::set(double a1, double b1, double c1) {
    a = a1;
    b = b1;
    c = c1;
}