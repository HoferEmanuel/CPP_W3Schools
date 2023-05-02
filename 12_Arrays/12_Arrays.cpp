#include <iostream>
#include <string>

using namespace std;

int main()
{
	string cars[4] = { "Volvo", "BMW", "Ford", "Mazda" };
	int myNums[3] = { 10, 20, 30 };
	
	cout << cars[1] << "\n";
	cars[1] = "Opel";
	cout << "car at index 1 is now " << cars[1] << "\n\n";
}