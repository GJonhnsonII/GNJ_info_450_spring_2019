#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Node {
public:
	char data[255];
	Node *next;
	Node() {
		next = NULL;
	}
	void insert_char(char str);
};

void Node::insert_char(char str) {
	if (next == NULL) {
		next = new Node;
		*next->data = str;
	}
	else {
		next->insert_char(str);
	}
}

int main() {
	Node linked_list;
	char str[255];
	ifstream in;
	in.open("output.txt");

	while (in) { 
		in.getline(str, 255);  // delim defaults to '\n'
		string string1(str);
		if (string1.compare("truck") == 0) {
			cout << "road_vehicle: " << str << ", ";
			linked_list.insert_char(str);
			in.getline(str, 255);
			cout << "wheels: " << str << ", ";
			linked_list.insert_char(str);
			in.getline(str, 255);
			cout << "passengers: " << str << ", ";
			linked_list.insert_char(str);
			in.getline(str, 255);
			cout << "cargo: " << str << endl;
			linked_list.insert_char(str);
		}
		else {
			cout << "road_vehicle: " << str << ", ";
			linked_list.insert_char(str);
			in.getline(str, 255);
			cout << "wheels: " << str << ", ";
			linked_list.insert_char(str);
			in.getline(str, 255);
			cout << "passengers: " << str << ", ";
			linked_list.insert_char(str);
			in.getline(str, 255);
			cout << "type: " << str << endl;
			linked_list.insert_char(str);
		}
	}
	
	system("pause");
	return 0;
}