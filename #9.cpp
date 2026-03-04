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

string readS()
{
	string s1;

	cout << "Enter the word " << endl;
	getline(cin, s1);


	return s1;
}

vector<string> splitstring(string s1, string delim)
{
	vector <string> vstring;
	short pos = 0;
	string sword;

	while ((pos = s1.find(delim)) != std::string::npos)
	{
		sword = s1.substr(0, pos);

		if (sword != "")
		{
			vstring.push_back(sword);
		}

		s1.erase(0, pos + delim.length());
	}

	if (s1 != "")
	{
		vstring.push_back(s1);

	}

	return vstring;
}

string ReversWord(string s1)
{
	vector<string>vstring;
	string s2 = "";

	vstring = splitstring(s1, " ");

	vector<string>::iterator iter = vstring.end();

	while (iter != vstring.begin())
	{
		--iter;

		s2 += *iter + " ";
	}

	return s2;
}

int main() {

	string s1 = readS();

	cout << "\n\n ";
	cout << ReversWord(s1);
	return 0;
}