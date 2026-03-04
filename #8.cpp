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

string JoinString(string s1[3], string delim, int lenth)
{
	string word = "";
	for (short i = 0; i < lenth; i++)
	{
		word = word + s1[i] + delim;
	}
	return (word.substr(0, word.length() - delim.length()));

}

int main() {

	vector <string> vstring = { "Ebrahim", "Ali", "Mohammed" };
	string arr[3] = { "Ebrahim", "Ali", "Mohammed" };

	cout << "Vector: " << JoinString(vstring, "<>") << endl;
	cout << "Arry: " << JoinString(arr, "<>", 3) << endl;

	return 0;
}