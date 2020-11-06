#pragma once

int FindGreatestCommonDivisor(int num1, int num2) {
	int b = num1 > num2 ? num1 : num2;
	int s = num1 < num2 ? num1 : num2;
	int r = b % s;
	while (r != 1) {
		
	}
	return 0;
}