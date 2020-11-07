#pragma once

//�����������������������Ҫ��b>s
int FindGreatestCommonDivisor(int b, int s) {
	if (b <= 0 || s <= 0)
		return 0;
	if (b < s)
		return FindGreatestCommonDivisor(s, b);
	int r = b % s;
	while (r != 0) {
		b = s;
		s = r;
		r = b % s;
	}
	return s;
}