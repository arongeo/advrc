// MADE BY mrmalac :: github.com/mrmalac
#include <iostream>
#include <string>
#include "hash.h"
#include "datetime.h"
#include "convert.h"
#include "files.h"

using namespace std;

int main() {
	string strnum = readFromFile("num.txt");
	int num = convertToInt(strnum);
	num = num + 1;
	string newstrnum = convertToStr(num);
	string fin;
	fin = strnum + "::" + dateTime();
	string chash = hashIt(fin);
	cout << "Hash: " << chash << " Num: " << strnum << " Datetime: " << dateTime() << endl;
	writeToFile("num.txt", newstrnum);
	return 0;
}

