#include <iostream>

using namespace std;

int main()
{
	int inputNum = 0;

	cout << "give me a number";

	//gets number from user and set int value
	cin >> inputNum;

	cout << "your number is " << inputNum << endl;

	//small "calculator"
	int num1, num2;
	int sum;

	cout << "give me your first number" << endl;
	cin >> num1;
	
	cout << "give me your second number" << endl;
	cin >> num2;

	sum = num1 + num2;

	cout << "the sum of " << num1 << " and " << num2 << " is " << sum;

	return 0;
}
