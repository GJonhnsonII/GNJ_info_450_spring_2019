#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

class Employee
{
private:
	char first_name[255]; // First Name
	char last_name[255]; // Last Name
	bool hourlyTrue; // Kept private? Not printed?
	bool checkTrue = true;
	string check;
	string hourly = "hourly";
	string exempt = "exempt";
	int compensation;
	int pay;
public:
	void set_first_name(char* in_name) {
		//cout << "set first name";
		strcpy_s(first_name, in_name);
	}
	void set_last_name(char* in_name) {
		//cout << "set last name";
		strcpy_s(last_name, in_name);
	}
	void compensationCheck() {
		while (checkTrue == true) {
			cout << "Enter compensation type: Type 'hourly' or 'exempt'\n";
			getline (cin, check);
			if (check == hourly)
				hourlyTrue == true;
				checkTrue == false;

			if (exempt == check)
				checkTrue == false;
			else
				cout << "Please try again.\n";
				checkTrue == true;
		}
	}
	void compensationAmount() {
		cout << "Enter hourly pay or annual salary\n";
		cin >> compensation;
		
	}
	void printEntry() {
		if (!hourlyTrue) {
			pay == (compensation * 2000);
			cout << last_name << ", ";
			cout << first_name;
			cout << " ...... ";
			cout << "$" << pay << "\n ";
		}
		else {
			cout << last_name << ", ";
			cout << first_name;
			cout << " ...... ";
			cout << "$"<< compensation << "\n ";
		}
	}
};
	int main()
	{
		char str[255];
		Employee newemp;
		cout << "Enter first name:\n";
		cin >> str;
		newemp.set_first_name(str);
		cout << "Enter last name:\n";
		cin >> str;
		newemp.set_last_name(str);
		newemp.compensationCheck();
		newemp.compensationAmount();
		newemp.printEntry();
		return 0;
	}
