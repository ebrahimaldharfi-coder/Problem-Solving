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

bool Isvowel(char c1)
{
	c1 = tolower(c1);

	return ((c1 == 'a') || (c1 == 'i') || (c1 == 'o') || (c1 == 'e') || (c1 == 'u'));
}

void printVowel(string s1)
{
	cout << "Vowels in string are : ";
	for (short i = 0; i < s1.length(); i++)
	{
		if (Isvowel(s1[i]))
			cout << s1[i] << "   ";
	}
}



int main() {

	string word = readS();

	printVowel(word);

	return 0;
}
