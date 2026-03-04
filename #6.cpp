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


string trimleft(string s1)
{
	for (short i = 0; i < s1.length(); i++)
	{
		if (s1[i] != ' ')
		{
			return (s1.substr(i, s1.length() - i));
		}
	}
}

string trimright(string s1)
{
	for (short i = s1.length() - 1; i >= 0; i--)
	{
		if (s1[i] != ' ')
		{
			return (s1.substr(0, i + 1));
		}
	}
}
int main() {

	string s1 = "    Ebrahim Aldharfi   ";

	cout << s1 << endl;
	cout << trimleft(s1) << endl;
	cout << trimright(s1) << endl;



	return 0;
}