#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    int scale, distance;

	cout << "Map scale (amount of km in 1 cm): ";   
	cin >> scale;

	cout << "Distance between dots that represent settlements on map (cm):";  
	cin >> distance;

	cout << scale * distance;
	cout << " km" << endl;

    system("pause");
    return 0;
}