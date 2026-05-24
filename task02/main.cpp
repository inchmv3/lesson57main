#include "logic.h"
int main() {
	int number;
	cout << "Enter your number: \n";
	cin >> number;

	string msg = "Index in tribonacci: " + to_string(tribonachi(number));
	cout << msg;

}