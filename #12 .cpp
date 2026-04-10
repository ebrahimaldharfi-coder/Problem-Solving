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

short ReadNumber(string massige)
{
	int num;
	cout << massige;
	cin >> num;

	return num;
}

bool IsLeapYear(short year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int NumberOfDays(short Year, short Month)
{
	if (Month < 1 || Month>12)
		return 0;

	short arr1[13] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2 ? (IsLeapYear(Year) ? 29 : 28) : arr1[Month]);

}

int NumberOfHours(short Year, short Month)
{
	return NumberOfDays(Year, Month) * 24;
}

int NumberOfMenets(short Year, short Month)
{
	return NumberOfHours(Year, Month) * 60;
}

int NumberOfSeconds(short Year, short Month)
{
	return NumberOfMenets(Year, Month) * 60;
}

int main()
{
	short Year = ReadNumber("Enter the Year? ");
	short Month = ReadNumber("Enter the Monrh? ");

	cout << "\nNumber Of Days In Month [" << Month << "] is " << NumberOfDays(Year, Month);
	cout << "\nNumber Of Hours In Month [" << Month << "] is " << NumberOfHours(Year, Month);
	cout << "\nNumber Of Minutes In Month [" << Month << "] is " << NumberOfMenets(Year, Month);
	cout << "\nNumber Of Seconds In Month [" << Month << "] is " << NumberOfSeconds(Year, Month);

	return 0;
}