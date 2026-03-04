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


void printWord(string s1)
{
	for (short i = 0; i < s1.length(); i++)
	{
		if (s1[i] == ' ')
			cout << endl;
		cout << s1[i];
	}

}


int main() {

	string s1 = readS();

	printWord(s1);


	return 0;
}