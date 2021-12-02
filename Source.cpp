#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;
string replacement_extension(string fname, string extension) {
	int n;
	n = fname.find('.');
	fname = fname.substr(0, n) + extension;
	cout << fname << endl;
	return fname;
}

int main() {
	string fileName, newextension;
	getline(cin, fileName);
	getline(cin, newextension);
	replacement_extension(fileName, newextension);
	return 0;
}