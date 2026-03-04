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

char readC()
{
	char s1;

	cout << "Enter the char " << endl;
	cin >> s1;

	return s1;
}

bool Isvowel(char c1)
{
	c1 = tolower(c1);

	return ((c1 == 'a') || (c1 == 'i') || (c1 == 'o') || (c1 == 'e') || (c1 == 'u'));
}

int countVowel(string word)
{
	int counter = 0;

	for (short i = 0; i < word.length(); i++)
	{
		if (Isvowel(word[i]))
		{
			counter++;
		}
	}

	return counter;
}



int main() {


	//char charctar = readC();
	string word = readS();

	cout << "Number of vowel is: " << countVowel( word) << endl;



	return 0;
}
