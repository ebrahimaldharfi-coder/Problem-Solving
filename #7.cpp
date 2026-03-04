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

string JoinString(vector<string>s1, string delim)
{
	string word = "";
	for (string& s : s1)
	{
		word = word + s + delim;
	}

	return (word.substr(0, word.length() - delim.length()));
}

int main() {

	vector <string> vstring = { "Ebrahim", "Ali", "Mohammed" };

	cout << JoinString(vstring, "<>");


	return 0;
}