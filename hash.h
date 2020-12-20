#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <time.h>

using namespace std;

unsigned int ahash;
int chash, tar;
int nonce = 0;

unsigned int HF(string a) {
	unsigned int val1 = 3146142467;
	unsigned long long val2 = 257394342463462646;
	unsigned int hash;
	for (int i = 0; i<a.length(); i++) {
		hash = hash ^ (a[i]);
		hash = hash * val2;
	}
	return hash;
}

string ToHex(int a) {
	string HexHash;
	stringstream hexstream;
	hexstream << hex << a;
	HexHash = hexstream.str();
	return HexHash;
}

string hashIt(string a) {
	return ToHex(HF(a));
}

//Dosen't work
int pow() {
	bool foundNonce = false;
	srand(time(NULL));
	int randIndex = rand() % 4;
	const int nums[5] = {2, 3, 4, 5, 6};
	long target = 2 ^ (256 - nums[randIndex]);
	while (foundNonce == false) {
		unsigned int ahash = 1;
		unsigned int chash = ahash;
		while (1000<=target) {
			int tar = target / 10;
		}
		while (1000<=chash) {
			unsigned int chash = chash / 10;
		}
		if (chash == tar) {
			cout << "Found Hash: " << ahash << " and Nonce: " << nonce << endl;
			foundNonce = true;
		} else {
			nonce = nonce + 1;
			cout << nonce << endl;
		};
	}
}
