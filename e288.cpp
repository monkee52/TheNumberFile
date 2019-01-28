#include <stdio.h>
#include <iostream>
#include <math.h>

void addition(int a[], int b[]) {
	int carry = 0;

	for (int i = 0; i < 100; i++) {
		b[i] = a[i] + b[i] + carry;

		if (b[i] < 1000) {
			carry = 0;
		} else if (b[i] > 999) {
			carry = 1;
			b[i] -= 1000;
		}
	}
}

void division(int a[], int x) {
	int d = 0;
	
	for (int i = 99; i >= 0; i--) {
		d = 1000 * d + a[i];
		a[i] = 0;

		if (x > d) {
			continue;
		}

		a[i] = (int)((double)d / (double)x);
		d = d - x * a[i];
	}
}

void multiplication(int a[], int x) {
	int carry = 0;
	
	for (int i = 0; i < 100; i++) {
		int d = x * a[i] + carry;
		
		carry = (int)((double)d / 1000);
		a[i] = d - 1000 * carry;
	}
}

void subtraction(int a[], int b[]) {
	int carry = 0;

	for (int i = 0; i < 100; i++) {
		b[i] = b[i] - a[i] - carry;

		if (b[i] >= 0) {
			carry = 0;
			continue;
		}

		b[i] = b[i] + 1000;
		carry = 1;
	}
}

int lastdigits(int n, int p) {
	return abs(n) % (int)pow(10, p);
}

int main(int argc, char *argv[]) {
	int a[100] = {0};
	int b[100] = {0};

	a[99] = 1;
	b[99] = 1;

	for (int x = 1; x < 167; x++) {
		division(a, x);
		addition(a, b);
	}

	std::cout << b[99] << ".";

	for (int i = 98; i >= 3; i--) {
		std::cout << lastdigits(10000 + b[i], 3);
	}

	std::cout << std::endl;
}
