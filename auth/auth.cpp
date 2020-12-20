// MADE BY mrmalac :: github.com/mrmalac on 2020/12/20
#include <iostream>
#include <string>
#include "../headers/hash.h"
#include "../headers/datetime.h"
#include "../headers/convert.h"
#include "../headers/files.h"

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

