#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Node {
	int data;
	Node *next;
};
typedef Node* NodePtr;

NodePtr& addHeadNode(NodePtr& head, int NewData);

void printList(NodePtr& head);

int main() {
	char str[255];
	ifstream in;
	in.open("output.txt");

	while (in) { 
		in.getline(str, 255);  // delim defaults to '\n'
		string string1(str);
		if (string1.compare("truck") == 0) {
			cout << "road_vehicle: " << str << ", ";
			in.getline(str, 255);
			cout << "wheels: " << str << ", ";
			in.getline(str, 255);
			cout << "passengers: " << str << ", ";
			in.getline(str, 255);
			cout << "cargo: " << str << endl;
		}
		else {
			cout << "road_vehicle: " << str << ", ";
			in.getline(str, 255);
			cout << "wheels: " << str << ", ";
			in.getline(str, 255);
			cout << "passengers: " << str << ", ";
			in.getline(str, 255);
			cout << "type: " << str << endl;
		}
	}
	
	system("pause");
	return 0;
}