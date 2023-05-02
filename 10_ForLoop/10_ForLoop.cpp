#include <iostream>

using namespace std;

int main()
{
	cout << "For Loop: " << "\n";
	//0 - 4
	for (int i = 0; i < 5; i++)
		cout << i << "\n";

	cout << endl;

	//even numbers 0 - 10
	for (int i = 0; i <= 10; i = i+2)
	{
		cout << i << "\n";
	}

	cout << "\n";
	cout << "Nested Loop" << endl;

	//Nested Loops

	//Outer Loop
	for (int i = 1; i <= 2; ++i)
	{
		cout << "Outer: " << i << "\n";
		
		//Inner Loop
		for (int j = i; j <= 3; ++j)
		{
			cout << "Inner: " << j << "\n";
		}
	}

	cout << "\n";
	cout << "Foreach-Loop trough array" << endl;

	int myNumbers[5] = { 10, 20, 30, 40, 50 };

	for (int i : myNumbers)
		cout << i << "\n";

	return 0;
}