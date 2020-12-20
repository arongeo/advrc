// MADE BY mrmalac :: github.com/mrmalac on 2020/12/20
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
		cout << "Hashes match." << endl;
		writeToFile("authnum.txt", newstrnum);
	} else {
		cout << "Hashes not match." << endl;
	}
	return 0;
}

