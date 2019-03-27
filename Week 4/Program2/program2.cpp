#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main() {
	int x = 0;
	int count = 0;
	int message;
	int const rows = 30;
	int const col = 100;
	char students[rows][col];
	for (x = 0; x < rows; x++) {
		strcpy_s
		(students[x], "");
	}
	for (x = 0; x < rows; x++) {
		cout << "Please enter student information: ";
		cin.getline(students[x], col);
		if (!strcmp("0", students[x])) {
			cout << "0 entered, end of list" << endl;
			break;
		}
		count++;
	}
	for (x = 0; x < count; x++) {
		cout << "student " << x << " : " << students[x] << endl;
	}
	for (x = count ; x < count + 1 ; x++) {
		cout << "end of list; Enter any key and press enter to exit.";
		cin >> message;
	}
	return 0;
}