#include <iostream>

using namespace std;

int main()
{
	//if
	int x = 15, y = 8;

	if (20 > 18)
		cout << "20 is greater than 18." << endl;

	if (x > y)
		cout << "x is greater than y." << endl;

	//else

	int time = 20;

	if (time < 20)
		cout << "Good Day" << endl;
	else
		cout << "Good Evening" << endl;

	//else if

	int time2 = 22;

	if (time > 10)
		cout << "Good Morning" << endl;
	else if (time < 20)
		cout << "Good Day" << endl;
	else
		cout << "Good Evening" << endl;

	//Ternary

	int time3 = 5;

	cout << (time2 < 18) ? "Good Day" : "Good Evening";

	return 0;
}