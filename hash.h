// MADE BY mrmalac :: github.com/mrmalac
#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <time.h>

using namespace std;

unsigned int HF(string a) {
	unsigned long long val = 257394342463462646;
	unsigned int hash;
	for (int i = 0; i<a.length(); i++) {
		hash = hash ^ (a[i]);
		hash = hash * val;
	}
	return hash;
}

string ToStr(int a) {
	string strhash;
	stringstream ss;
	ss << hex << a;
	ss >> strhash;
	return strhash;
}

string hashIt(string a) {
	return ToStr(HF(a));
}
