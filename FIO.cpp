#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<string>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string fio, name, name2, f;
	int n;
	cout << "¬ведите фамилию,им€,отчество:\n";
	getline(cin, fio);
	n = fio.find(' ');
	f = fio.substr(0, n);

	fio = fio.substr(n + 1);
	n = fio.find(' ');
	name = fio.substr(0, 1) + '.';

	fio = fio.substr(n + 1);
	name2 = fio.substr(0, 1) + '.' + ' ';

	fio = name + name2 + f;
	cout << fio << endl;
	return 0;
}