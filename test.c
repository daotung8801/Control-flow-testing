#include <stdio.h>

float functionTest(int a, int b, int c) {
	int sum = 0;
	if (a + b == 4) {
		return 0;
	}
	int d = 0;
	if (a == b && b!= c) {
		d = a + b;
	}
	sum = d + c;
	return sum;
}
