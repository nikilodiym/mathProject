#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    double amout;

    cout << "Enter a fractional number: ";
    cin >> amout;
    cout << "" << endl;

    int hryvnia = static_cast<int>(amout);
    int kopecks = static_cast<int>(round((amout - hryvnia) * 100));
    cout << hryvnia << " grn. " << kopecks << " kop." << endl;

    system("pause");
    return 0;
}