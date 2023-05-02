#include <iostream>

using namespace std;

int main()
{
	//while
	cout << "While" << "\n\n";

	int i = 0;

	while (i < 5)
	{
		cout << i << "\n";
		i++;
	}

	cout << "\n";
	cout << "Do-While" << "\n\n";

	//do while

	int j = 0;
	do {
		cout << j << "\n";
		j++;
	} while (j < 5);

	return 0;
}