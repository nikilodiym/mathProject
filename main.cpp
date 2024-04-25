#include <iostream>
#include <Windows.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main() {
    int radius;

    cout << "Radius of sphere: ";
    cin >> radius;
    cout << "" << endl;
    cout << (4 * M_PI * (radius * radius * radius)) / 3;
    cout << "cm" << endl;

    system("pause");
    return 0;
}