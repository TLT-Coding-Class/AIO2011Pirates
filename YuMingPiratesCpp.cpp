// pirate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream filein;
	filein.open("piratein.txt");
	string l1, x1, y1;
	filein >> l1;
	int l = stoi(l1);
	filein >> x1;
	int x = stoi(x1);
	filein >> y1;
	int y = stoi(y1);
	filein.close();
	ofstream fileout;
	fileout.open("pirateout.txt");
	if (x + y > (l - y) + (l - x))
	{
		fileout << (l - y + l - x);
	}
	else if (x + y == l - y + l - x)
	{
		fileout << (x + y);
	}
	else
	{
		fileout << (x + y);
	}
}
