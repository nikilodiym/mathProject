#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    int length, width, height;

    cout << "Enter lenth pralelepipeda: ";
    cin >> length;
    cout << "" << endl;

    cout << "Enter width pralelepipeda: ";
    cin >> width;
    cout << "" << endl;

    cout << "Enter height pralelepipeda: ";
    cin >> height;
    cout << "" << endl;

    int volume = length * width * height;
    cout << "Volume pralelepipeda is: " << volume << "kva/sm" << endl;


    system("pause");
    return 0;
}