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

int NumberOfHours(short Year, short Month)
{
	return NumberOfDaysInMonth(Year, Month) * 24;
}

int NumberOfMenets(short Year, short Month)
{
	return NumberOfHours(Year, Month) * 60;
}

int NumberOfSeconds(short Year, short Month)
{
	return NumberOfMenets(Year, Month) * 60;
}

short DayOfWeekOrder(short Day, short Month, short Year)
{
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + (12 * a) - 2;

	return(Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

string PrintMonthName(short Month)
{
	string arr1[12] = { "Jin","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };
	return arr1[Month - 1];
}

void PrintMonth(short Year, short Month)
{
	int NumberOfDay = NumberOfDaysInMonth(Year, Month);

	int current = DayOfWeekOrder(1, Month, Year);

	printf("\n\n________________%s___________________\n\n", PrintMonthName(Month).c_str());

	printf(" Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

	int i;
	for (i = 0; i < current; i++)
		printf("     ");

	for (int j = 1; j <= NumberOfDay; j++)
	{
		printf("%5d", j);

		if (++i == 7)
		{
			i = 0;
			printf("\n");
		}
	}

	printf("\n_________________________________\n");

}

void PrintYearCalender(short Year)
{
	printf("____________________________________________\n\n");
	printf("             Calender - %d                \n\n", Year);
	printf("____________________________________________\n\n");

	for (int i = 1; i < +12; i++)
	{
		PrintMonth(Year, i);
		printf("____________________________________________\n\n");
	}

}

int main()
{
	short Year = ReadNumber("Enter the Year? ");

	PrintYearCalender(Year);

	return 0;
}