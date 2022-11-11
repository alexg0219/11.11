#include <iostream>
#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	string name1, name2, name3;

	cin >> name1 >> name2 >> name3;
	ifstream input1(name1);
	ifstream input2(name2);
	ofstream output(name3);

	if (!input1 || !input2) {
		cout << "Error opening files" << endl;
		return 0;
	}

	int v1, v2, o;
	string s[11] = { " ", "первая", "вторая", "третья", "четвертая", "пятая", "шестая", "седьмая", "восьмая", "девятая", "десятая" };
	int j = 0;

	while (!input1.eof())
	{
		input1 >> v1;
		if ((j % 10) == 0 && (j != 0))
		{
			output << s[((j + 1) / 10)] << endl;
		}
		if (v1 > 0)
		{
			j++;
			output << v1 << endl;
			continue;
		}
		else
		{
			continue;
		}

	}

	while (!input2.eof())
	{
		input2 >> v2;
		if ((j % 10) == 0 && (j != 0))
		{
			output << s[((j + 1) / 10)] << endl;
		}
		if (v2 > 0)
		{
			j++;
			output << v2 << endl;
			continue;
		}
		else
		{
			continue;
		}
		

	}

	input1.close();
	input2.close();
	output.close();
}
