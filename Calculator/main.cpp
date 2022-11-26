#include "main.h"
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
	string first;
	char znak;
	int znakIndex = 0;
	char whatIsOpercia;
	string second;
	int result;
	string full;
	cout << "Enter expression: ";
	cin >> full;
	for (int i = 0; i < full.length(); i++) { // Finding "+" position
		if (full[i] == '+') {
			znakIndex = i;
			whatIsOpercia = '+';
		}
		else if (full[i] == '-') {
			znakIndex = i;
			whatIsOpercia = '-';
		}
		else if (full[i] == '/') {
			znakIndex = i;
			whatIsOpercia = '/';
		}
		else if (full[i] == '*') {
			znakIndex = i;
			whatIsOpercia = '*';
		}
	}
	//cout << "Znak index is in" << znakIndex << endl; //Debug

	for (int i = 0; i < znakIndex; i++) // Finding first number 
	{
		first += full[i];
	}
	//cout << "First num is " << first << endl; //Debug

	for (int i = znakIndex + 1; i < full.length(); i++)
	{
		second += full[i];
	}
	//cout << "Second num is " << second << endl; //Debug
	
	if (whatIsOpercia == '+') {
		result = stoi(first) + stoi(second);
	}
	else if (whatIsOpercia == '-') {
		result = stoi(first) - stoi(second);
	}
	else if (whatIsOpercia == '*') {
		result = stoi(first) * stoi(second);
	}
	else if (whatIsOpercia == '/') {
		result = stoi(first) / stoi(second);
	}
	cout << "Result is " << result;
}