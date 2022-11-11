#include <iostream>
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

	string t,o;
	int c,p;
	input >> t;
	p = t.find('1');

	while (p + 1)
	{
		c = 0;
		for (int i = p - 1; i >= 0; i--)
		{
			if (t[i] == '0')
			{
				c++;
			}
			else
			{
				break;
			}
		}
		o.push_back(97 + c);
		p = t.find('1', p + 1);
	}

	output << o;
	input.close();
	output.close();
}
