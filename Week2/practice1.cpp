#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int i = 1;
	
	while (i > 0 || i < 0) {
		cout << "Please enter an integer value: ";
		cin >> i;

		if (i < 0) {
			cout << "Value entered was not positive." << endl;
			continue;
		}

		cout << "The value you entered is " << i;
		cout << " and its square is " << i * i << ".\n";
		
	}
	cout << "Zero entered. Exiting Program." << endl;
	return 0;
}
