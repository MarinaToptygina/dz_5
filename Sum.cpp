#include<iostream>

#include<string>
using namespace std;

int sum(char s[]) {
	int size=100;
	cout <<"numeric expression : ";
	int sum = 0;
	int p = 1;
	int index = 0;
	cin.getline(s, size);
	for (int i = 0; i < strlen(s); i++){
		if (s[i] != '+' && (i == 0 || s[i - 1] =='+')) {
			sum += atoi(s + index);
		}
		if (s[i] == '+') index = i + 1;
	}
	cout << "Summa : " << sum << endl;
	return sum;
}

int maim(){
	char expression[100];
	sum(expression);
	return 0;
}
