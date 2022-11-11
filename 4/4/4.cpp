#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream input("input.txt");
	ofstream output("output.txt");

	if (!input)
	{
		cout << "error";
		return 0;
	}
	
	int o=0;
	string s1, s2, s3, s4;
	input >> s1 >> s2 >> s3 >> s4;

	for (int i = 0; i < 3; i++)
	{
		if (s1[i] == s2[i] && s1[i + 1] == s2[i + 1] && s1[i] == s1[i+1])
			o = o + 1;
	}
	
	if (o == 0)
		for (int a = 0; a < 3; a++)
		{
		if (s2[a] == s3[a] && s2[a + 1] == s3[a + 1] && s2[a] == s2[a + 1])
			o = o + 1;
		}
	
	if (o == 0)
		for (int j = 0; j < 3; j++)
		{
		if (s3[j] == s4[j] && s3[j + 1] == s4[j + 1] && s3[j] == s3[j + 1])
			o = o + 1;
		}

	if (o == 0)
		output << "Yes";
	else
		output << "No";
	
	input.close();
	output.close();
}