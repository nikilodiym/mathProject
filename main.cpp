#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    int grn, kop;
    cout << "Enter the amount in hryvnias: ";
    cin >> grn;
    cout << "" << endl;
    cout << "Enter the amount in kopiyka: ";
    cin >> kop;
    cout << "" << endl;

    int breeding = kop / 100;
    grn += breeding;
    kop %= 100;

    cout << "Finall amout in grn is: " << grn << " grn. And in the kopiyka is: " << kop << " kop" << endl;
    cout << "Sum: " << grn << "." << kop << " grn" << endl;


    system("pause");
    return 0;
}