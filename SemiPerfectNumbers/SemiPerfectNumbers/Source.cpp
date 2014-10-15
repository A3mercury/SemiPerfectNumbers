// Almost a Perfect Number?
// Austin Andrews
// Visual Studio 2013
#include <iostream>
#include <fstream>
using namespace std;

const string INPUT = "semiperfect.in";
const string OUTPUT = "semiperfect.out";

void main()
{
	ifstream fin(INPUT);
	if (fin)
	{
		ofstream fout(OUTPUT);
		int readline;

		fin >> readline;
		while (readline != 0)
		{
			

			fin >> readline;
		}

		fout.close();
		fin.close();
	}
	else
	{
		cout << "Input file could not be found." << endl;
	}
}