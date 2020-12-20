// MADE BY mrmalac :: github.com/mrmalac on 2020/12/20
#include <iostream>
#include <string>
#include "../headers/hash.h"
#include "../headers/datetime.h"
#include "../headers/convert.h"
#include "../headers/files.h"

using namespace std;

int verify(string fin, string newstrnum, string inp) {
	string chash = hashIt(fin);
	if (chash == inp) {
		cout << "Opened." << endl;
		writeToFile("authnum.txt", newstrnum);
	}
	return 0;
}

int formatStr(string part1, string part2, string inp, string newstrnum) {
	for (int i = 0; i<5; i++) {
		int secs = convertToInt(part2) - i;
		string strsecs = convertToStr(secs);
		if (secs < 10) {
			string fin = part1 + "0" + strsecs;
			verify(fin, newstrnum, inp);
		} else {
			string fin = part1 + strsecs;
			verify(fin, newstrnum, inp);
		}
	}
	return 0;
}

int main() {
	string inp;
	cin >> inp;
	string strnum = readFromFile("authnum.txt");
	int num = convertToInt(strnum);
	int firstnum = num;
	num = num + 1;
	string newstrnum = convertToStr(num);
	string fin;
	fin = strnum + "::" + dateTime();
	string part1;
	string part2;
	if (firstnum > 9) {
		string part1 = fin.substr(0, 21);
		string part2 = fin.substr(21, 23);
		formatStr(part1, part2, inp, newstrnum);
	} else if (firstnum > 99) {
		string part1 = fin.substr(0, 22);
		string part2 = fin.substr(22, 24);
		formatStr(part1, part2, inp, newstrnum);
	} else if (firstnum > 999) {
		string part1 = fin.substr(0, 23);
		string part2 = fin.substr(23, 25);
		formatStr(part1, part2, inp, newstrnum);
	} else {
		string part1 = fin.substr(0, 20);
		string part2 = fin.substr(20, 21);
		formatStr(part1, part2, inp, newstrnum);
	}
	return 0;
}

