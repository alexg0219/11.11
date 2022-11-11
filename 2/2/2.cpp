#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    int w, h, i, j, n, x1, x2, y1, y2, Sum = 0;

    ifstream input("input.txt");
    ofstream output("output.txt");

    if (!input)
    {
        cout << "error";
        return 0;
    }



    input >> w >> h >> n;

    int ar[100][100];

    for (i = 0; i < h; ++i)
    {
        for (j = 0; j < w; ++j)
        {
            ar[i][j] = 0;
        }
    }

    while (n > 0)
    {
        input >> x1 >> y1 >> x2 >> y2;
        cout << x1 << y1 << x2 << y2 << endl;

        for (i = y1; i < y2; i++)
        {
            for (j = x1; j < x2; j++)
            {
                ar[i][j] = 1;
            }
        }
        n--;
    }

    for (i = 0; i < h; i++)
    {
        for (j = 0; j < w; j++)
        {
            if (ar[i][j] == 0)
            {
                Sum++;
            }
        }
    }
    output << Sum;
    input.close();
}
