#include <iostream>
#include <string>
#include "hash.h"
#include "datetime.h"
#include "convert.h"
#include "files.h"

using namespace std;

int main() {
	string inp;
	cin >> inp;
	string strnum = readFromFile("authnum.txt");
	int num = convertToInt(strnum);
	num = num + 1;
	string newstrnum = convertToStr(num);
	string fin;
	fin = strnum + "::" + dateTime();
	string chash = hashIt(fin);
	if (chash == inp) {
		cout << "Opened." << endl;
		writeToFile("authnum.txt", newstrnum);
	} else {
		cout << "Not opened." << endl;
	}
	return 0;
}

