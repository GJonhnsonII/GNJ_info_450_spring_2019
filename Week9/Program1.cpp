#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	string str_vehicle;
	string str_wh;
	string str_pas;
	string str_cgo;
	string str_type;
	string str_rep;
	int repeat = 0;
	ofstream out;

	while (repeat == 0) {
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
		getline(cin, str_vehicle);
		cout << "How many wheels does this vehicle have?" << endl;
		getline(cin, str_wh);
		int wheels = stoi(str_wh, nullptr, 10);
		cout << "How many passengers can this vehicle hold?" << endl;
		getline(cin, str_pas);
		int pass = stoi(str_pas, nullptr, 10);

		if (str_vehicle.compare("truck") == 0) {
			cout << "How much cargo (in pounds) can this vehicle hold?" << endl;
			getline(cin, str_cgo);
			int cargo = stoi(str_cgo, nullptr, 10);
			cout << str_vehicle << " " << wheels << " " << pass << endl;
			cout << "cargo in pounds: " << cargo << endl;
			out << str_vehicle << "\n" << wheels << "\n" << pass << "\n" << cargo << endl;
			out.close();
		}
		else {
			cout << "What type of automobile is this?   Enter van, car or wagon" << endl;
			getline(cin, str_type);
			cout << str_vehicle << " " << wheels << " " << pass << endl;
			cout << "vehicle type: " << str_type << endl;
			out << str_vehicle << "\n" << wheels << "\n" << pass << "\n" << str_type << "\n";
			out.close();
		}
		cout << "Would you like to enter another vehicle? yes or no" << endl;
		getline(cin, str_rep);
		if (str_rep.compare("no") == 0) {
			repeat++;
		}
		
	}

	return 0;
}