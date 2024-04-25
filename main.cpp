#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    int days;

    cout << "Enter the number of days: ";
    cin >> days;
    cout << "" << endl;

    int weeks = days / 7;
    int remaining_days = days % 7;

    cout << "Weeks: " << weeks << "       Remaining days: " << remaining_days << endl;

    system("pause");
    return 0;
}