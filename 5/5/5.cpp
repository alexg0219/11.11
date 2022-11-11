#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>


using namespace std;

int main()
{
	fstream input("input.txt");
	fstream output("output.txt");

	if (!input)
	{
		cout << "error" << endl;
		return 0;
	}
	
	int n, m,k;
	bool bO=1;

	input >> n >> m;

	vector <string> s(n);

	for (int i = 0; i < n; i++)
		input >> s[i];

	for (int j = 0; j < n; j++)
		for (int a = 0; a < m; a++)
		{
			input >> k;
			if (s[j][a] == '.')
				bO = bO;
			if (s[j][a] == 'B')
				bO = bO && (k == 1 || k == 3 || k == 5 || k == 7);
			if (s[j][a] == 'G')
				bO = bO && (k == 2 || k == 3 || k == 6 || k == 7);
			if (s[j][a] == 'R')
				bO = bO && (k == 4 || k == 5 || k == 6 || k == 7);
		}

	if (bO == true)
		output << "yes";
	else
		output << "no";

	input.close();
	output.close();
}
