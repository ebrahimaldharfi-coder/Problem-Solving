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

struct sClient
{
	string AcountName;
	string PinCode;
	string Name;
	string Phone;
	double Balanse;
};

sClient ReadData()
{
	sClient clinet;

	cout << "Enter Acount Name? ";
	getline(cin, clinet.AcountName);

	cout << "Enter Pin-Code? ";
	getline(cin, clinet.PinCode);

	cout << "Enter Your Name? ";
	getline(cin, clinet.Name);

	cout << "Enter Phone-Number? ";
	getline(cin, clinet.Phone);

	cout << "Enter Balance? ";
	cin >> clinet.Balanse;

	return clinet;
}

string converttoline(sClient clinet, string delem = "<>")
{
	string s1 = "";

	s1 += clinet.AcountName + delem;
	s1 += clinet.PinCode + delem;
	s1 += clinet.Name + delem;
	s1 += clinet.Phone + delem;
	s1 += to_string(clinet.Balanse);

	return s1;
}

int main() {

	sClient clinet;

	clinet = ReadData();

	cout << "\n\n" << converttoline(clinet) << endl;





	return 0;
}