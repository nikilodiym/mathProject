#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    int sec;

    cout << "Enter time in the second: ";
    cin >> sec;
    cout << "" << endl;

    int h = sec / 3600;
    int m = (sec % 3600) / 60;
    int s = sec % 60;

    cout << "Now we have " << h << " hour " << m << " minute " << s << " second" << endl;
    cout << h << "h" << m << "m" << s << endl;

    system("pause");
    return 0;
}