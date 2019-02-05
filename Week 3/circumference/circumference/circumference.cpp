#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.14159265358979323846;
double circumference = 0;
double calculateCircumference(double radius);
int main() {
	double radius = 0;
	char answer;
	do {
		calculateCircumference(radius);
		cout << "Circumference: " << circumference << endl;
		cout << "Another one? enter Y or N: " << endl;
		cin >> answer;
	} while ((answer == 'Y') || (answer == 'y'));
	return 0;
}
double calculateCircumference(double radius){
	double doublePI = 0;
	doublePI = static_cast<double>(PI);
	cout << "Enter radius: ";
	cin >> radius;
	circumference = doublePI * pow(radius, 2);
	return circumference;
}