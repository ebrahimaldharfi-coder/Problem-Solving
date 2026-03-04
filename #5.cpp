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

int main() {

	

	vector<string>vstring;
	vstring = splitstring(readS(), " ");


	cout << "\n Tokens = " << vstring.size() << endl;

	for (string& s : vstring)
	{
		cout << s << endl;
	}

	return 0;
}