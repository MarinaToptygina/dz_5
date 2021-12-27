#include<iostream>			
#include<string> 		
#include<stdio.h>			
using namespace std;			
char replacement_extension(char fName[100], char extension[10]) {			
	int i = 0;		
			
	while (fName[i] != '.') {		
		if (fName[i] == '\0')   	
			break;            
		i++;	
	}		
	if (fName[i] == '.')	           
		strcpy_s(fName + i, 100, extension);  
	else strcat_s(fName, 100, extension);    		
			
	cout << fName << endl;		
	return 0;		
}			
			
int main() {			
			
	char filename[100], newextension[10];		
	cin.getline(filename, 100);		
	cin.getline(newextension, 10);		
	replacement_extension(filename, newextension);		
			
	return 0;		
}			
