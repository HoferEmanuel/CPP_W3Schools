#include <iostream>

using namespace std;

int main()
{
	//break and continue can be also used in a while loop

	for (int i = 0; i < 10; i++)
	{
		if (i == 4)
		{
			cout << "break at " << i << endl;
			break;
		}

		cout << i << endl;
	}

	for (int i = 0; i < 10; i++)
	{
		if (i == 4)
		{
			cout << "continue at " << i << endl;
			continue;
		}

		cout << i << endl;
	}
}
