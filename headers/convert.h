// MADE BY mrmalac :: github.com/mrmalac on 2020/12/20
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string convertToStr(int a) {
         stringstream ss;
         ss << a;
         string s;
         ss >> s;
         return s;       
}
 
int convertToInt(string a) {
         stringstream ss;
         ss << a;
         int i;
         ss >> i;
         return i;
}
