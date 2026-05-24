#include "logic.h"
int main() {
	int number;
	cout << "Enter your number: \n";
	cin >> number;

	string msg = is_power_of_four(number) ? "Yes, is power of four" : "No, isnt power of four";
	cout << msg;

}