// MADE BY mrmalac :: github.com/mrmalac on 2020/12/20
#include <iostream>
#include <string>
#include "../headers/hash.h"
#include "../headers/datetime.h"
#include "../headers/convert.h"
#include "../headers/files.h"

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

