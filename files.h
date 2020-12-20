#include <iostream>
#include <fstream>

using namespace std;

int writeToFile(string filename, string a) {
	ofstream file;
	file.open(filename);
	file << a;
	file.close();
	return 0;
}

string readFromFile(string filename) {
	string content;
	ifstream file;
	file.open(filename);
	file >> content;
	file.close();
	return content;
}
