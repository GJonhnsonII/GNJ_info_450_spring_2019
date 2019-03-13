#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main() {
	int x = 0;
	int count = 0;
	int const rows = 30;
	int const col = 100;
	char students[rows][col];
	for (x = 0; x < rows; x++) {
		strcpy_sv
		(students[x], "");
	}
	for (x = 0; x < rows; x++) {
		cout << "Please enter student for index " << x << " :";
		cin.getline(students[x], col);
		if (!strcmp("0", students[x])) {
			cout << "Got a 0, breaking." << endl;
			break;
		}
		count++;
	}
	for (x = 0; x < count; x++) {
		cout << "students[" << x << "] = " << students[x] << endl;
	}
}