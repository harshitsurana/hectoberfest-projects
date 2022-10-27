#include <iostream>
#include <sstream>
using namespace std;

void extractIntegerWords(string str)
{
	stringstream ss;

	ss << str;
	string temp;
	int found;
	while (!ss.eof())
	{

		ss >> temp;
		if (stringstream(temp) >> found)
			cout << found << " ";
		temp = "";
	}
}

// Driver code
int main()
{
	string str = "1: 2 3 4 prakhar";
	extractIntegerWords(str);
	return 0;
}
