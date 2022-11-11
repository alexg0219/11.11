#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() 
{
	ifstream input("input.txt");
	ofstream output("output.txt");

	int n;
	input >> n;
	string s, a = "0123456789", b = "ABCEXCMTPHKY";
	for (int i = 0; i < n; ++i) 
	{
		input >> s;
		int p = b.find(s[0]);
		if (p == -1) 
		{
			output << "No" << endl;
			continue;
		}
		p = a.find(s[1]);
		if (p == -1) 
		{
			output << "No" << endl;
			continue;
		}
		p = a.find(s[2]);
		if (p == -1) {
			output << "No" << endl;
			continue;
		}
		p = a.find(s[3]);
		if (p == -1) {
			output << "No" << endl;
			continue;
		}
		p = b.find(s[4]);
		if (p == -1) {
			output << "No" << endl;
			continue;
		}
		p = b.find(s[5]);
		if (p == -1) {
			output << "No" << endl;
			continue;
		}
		output<< "Yes" << endl;
	}
	return 0;

	input.close();
	output.close();
}