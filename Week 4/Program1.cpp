#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int arrayval = 0;
	double sum = 0;
	int i = 0;
	double sum2 = 0;
	double meanminus = 0;
	double squaremean = 0;
	double mean = 0;
	double stddev = 0;
	int my_array[11];
	for (i = 0; i < 10; i++) {
		cout << "Please enter a whole number: ";
		cin >> arrayval;
		my_array[i] = arrayval;
	}
	for (i = 0; i < 10; i++) {
		sum = sum + my_array[i];
		mean = sum / 10;
	}

	cout << "The mean of these values is: " << mean << endl;

	for (i = 0; i < 10; i++) {
		my_array[i] = my_array[i] - mean;
		my_array[i] = my_array[i] * my_array[i];
	}
	for (i = 0; i < 10; i++) {
		sum2 = sum2 + my_array[i];
		squaremean = sum2 / 10;
	}
	stddev = sqrt(squaremean);
	cout << "The Standard Deviation of these values is: " << stddev << endl;
	cin >> mean;
	return 0;
}
