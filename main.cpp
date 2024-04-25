#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    
    int year;
    const char* days_str[] = { "365", "366" };

    cout << "Enter the year: ";
    cin >> year;
    cout << "" << endl;

    int part = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    int day = part;
    cout << "In " << year << "p have are " << days_str[day] << "days." << endl;

    system("pause");
    return 0;
}