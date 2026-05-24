#include "logic.h"
bool recursion(int number) {
	if (number == 1) {
		return true;
	}
	if (number % 4 != 0) {
		return false;
	}

	return recursion(number / 4);
}
bool is_power_of_four(int number) {
	if (number <= 0) {
		return false;
	}

	return recursion(number);
}