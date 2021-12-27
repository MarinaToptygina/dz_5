#include<iostream>		
#include<string> 
#include<windows.h>	
#include<stdio.h>		
using namespace std;
void names(char s[])
{
	char name[] = " . ", name2[] = " .", s1[80];
	char* p1;
	int i;
	for (i = strlen(s) - 1; s[i] && s[i] != ' '; i--);
	p1 = &s[i + 1];
	name[0] = s[i + 1];
	for (i = 0; s[i] && s[i] != ' '; i++);
	p1 = &s[i + 1];
	name2[0] = s[i + 1];
	char* next_token = NULL;
	p1 = strtok_s(s, " ", &next_token);
	strcpy_s(s1, name2);
	strcat_s(s1, name);
	strcat_s(s1, p1);
	cout << s1 << endl;
}

int main() {
	SetConsoleCP(1251);	
	SetConsoleOutputCP(1251);	
	char s[80];
	cout << "¬ведите фамилию, им€, отчество :\n";
	cin.getline(s, sizeof(s));
	names(s);
	return 0;
}
