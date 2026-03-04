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

char readC()
{
	char s1;

	cout << "Enter the char " << endl;
	cin >> s1;

	return s1;
}

bool chick(char c1)
{
	c1 = tolower(c1);

	return ((c1 == 'a') || (c1 == 'i') || (c1 == 'o') || (c1 == 'e') || (c1 == 'u'));
}



int main() {


	char charctar = readC();

	if (chick(charctar))
		cout << "\n Yes the letter " << charctar << " is vowel";
	else
		cout << "\n No the letter " << charctar << " is not vowel";



	return 0;
}
