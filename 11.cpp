#include <iostream>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <vector>
#include <random>
#include <string>
#include <cctype>  // isupper|lawer, isdiget
#include <iomanip> // setw()
#include <ctime>
using namespace std;

short ReadNumber()
{
	int num;
	cout << "Enter The number? ";
	cin >> num;

	return num;
}

bool IsLeapYear(short year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main()
{
	short Year = ReadNumber();

	cout << "Number Of Days In Year [" << Year << "] is " << NumberOfDays(Year);

	if (IsLeapYear(Year))
		cout << "\n Yes, Year [" << Year << "] is a leap year.\n";

	else
		cout << "\n No, Year [" << Year << "] is NOT a leap year.\n";


	return 0;
}