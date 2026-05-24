#include "logic.h"
int recursion(int number) {
	if (number == 0 || number == 1) {
		return 0;
	}
	if (number == 2) {
		return 1;
	}

	return recursion(number - 1) + recursion(number - 2) + recursion(number - 3);
}
int tribonachi(int number) {
	return recursion(number);
}