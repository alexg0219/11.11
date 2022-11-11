#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
	ifstream input("input.txt");
	ofstream output("output.txt");

	if (!input)
	{
		cout << "error" << endl;
		return 0;
	}


	string s;
	int x1 = 1, x2 = 1, x3 = 1;
	vector <int> a;
	input >> s;
	a.push_back(0);

	for (int i = 0; i < s.size() || x3 < s.size(); ++i)
	{
		x3 = x2 + x1;
		x1 = x2;
		x2 = x3;
		a.push_back(x3 - 1);
	}
	for (int j = 0; j < a.size(); j++)
		if (a[j] < s.size())
		{
			output << s.substr(a[j], 1);
		}
	input.close();
	output.close();
}