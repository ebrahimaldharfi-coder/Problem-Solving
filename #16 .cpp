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

int NumberOfDaysInMonth(short Year, short Month)
{
	if (Month < 1 || Month>12)
		return 0;

	short arr1[13] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2 ? (IsLeapYear(Year) ? 29 : 28) : arr1[Month]);

}

short NumberOfDaysFromBegningTheYear(short Year, short Month, short Day)
{
	short totalDays = 0;

	for (int i = 1; i <= Month - 1; i++)
	{
		totalDays += NumberOfDaysInMonth(Year, i);
	}
	return totalDays + Day;
}

int main()
{
	short Year = ReadNumber("Enter the Year? ");
	short Month = ReadNumber("Enter the Month? ");
	short Day = ReadNumber("Enter the Day? ");

	cout << "Number Of Days From Begning The Year is: " << NumberOfDaysFromBegningTheYear(Year, Month, Day) << endl;

	

	return 0;
}