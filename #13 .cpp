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

int NumberOfDays(short Year)
{
	return IsLeapYear(Year) ? 366 : 365;
}

int NumberOfHours(short Year)
{
	return NumberOfDays(Year) * 24;
}

int NumberOfMenets(short Year)
{
	return NumberOfHours(Year) * 60;
}

int NumberOfSeconds(short Year)
{
	return NumberOfMenets(Year) * 60;
}

int main()
{
	short Year = ReadNumber();

	cout << "\nNumber Of Days In Year [" << Year << "] is " << NumberOfDays(Year);
	cout << "\nNumber Of Hours In Year [" << Year << "] is " << NumberOfHours(Year);
	cout << "\nNumber Of Minutes In Year [" << Year << "] is " << NumberOfMenets(Year);
	cout << "\nNumber Of Seconds In Year [" << Year << "] is " << NumberOfSeconds(Year);

	return 0;
}