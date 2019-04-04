#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ofstream out;
	out.open("output.txt");
	if (!out) {
		cout << "Cannot open file." << endl;
		return 1;
	}
	if (!out.is_open()) {
		cout << "File is not open." << endl;
		return 2;
	}
	cout << "Is this an automobile or a truck? Enter 'automobile' or 'truck'" << endl;
	cout << "How many wheels does this vehicle have?" << endl;
	cout << "How many passengers can this vehicle hold?" << endl;

	out << "This is my file." << endl;
	out << "I am outputting two lines of text." << endl;
	out.close();
	return 0;
}