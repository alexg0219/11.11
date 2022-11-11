#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream input ("input.txt");
	ofstream output ("output.txt");

	if (!input)
	{
		cout << "error";
		return 0;
	}

	int n, m,sum=0;
	string s;

	input >> n >> m;
	getline(input, s, ' ');
	s.erase(remove(s.begin(), s.end(), '\n'), s.end());
	
	for (int i = 0; i < n * m; i++)
	{
		if (s[i] == s[i + n * m])
			sum++;
	}

	output << sum;

	input.close();
}