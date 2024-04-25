#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    int i, t, v;

    cout << "Enter the path the runner ran: ";
    cin >> i;
    cout << "" << endl;
    cout << "Enter the time for which the runner covered the distance: ";
    cin >> t;
    cout << "" << endl;

    int resuM = v = i / t;
    cout << "The runner ran at speed: " << resuM << "km/h" << endl;

    system("pause");
    return 0;
}