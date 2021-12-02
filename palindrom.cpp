#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<string.h>
using namespace std;

bool palindrom(char str[10]) {
	int len = strlen(str);
	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len - 1 - i])
			return false;
	}
	return true;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char str[10];
	cin.getline(str, 10);
	printf("%s", str);
	cout << endl;
	if (palindrom(str)) {
		cout << "палиндром" << endl;
	}
	else cout << "не палиндром" << endl;
	printf("%s", str);
	return 0;
}
