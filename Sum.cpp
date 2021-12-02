#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main() {
	int sum = 0, n;
	string str;
	cout << "String:\n";
	getline(cin, str);

	stringstream ss(str);
	while (ss >> n) {
		sum += n;

	}
	cout << "sum = " << sum << "\n";
	return 0;
}