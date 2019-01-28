#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include <iomanip>
#include <math.h>

int main(int argc, char *argv[]) {
	double c = 0;
	uint64_t a[10000];
	uint64_t b[1000];
	
	while (c < 100 || c > 100000000 || (c != 2 * (int)(c / 2))) {
		std::cout << "Enter beginning of range: ";
		std::cin >> c;
	}
	
	int c2 = sqrt(c + 1000) + 1;
	
	if (c2 > 9999) {
		c2 = 9999;
	}
	
	for (int i = 3; i < 98; i += 2) {
		uint64_t h = i * i;
		uint64_t k = 2 * i;
		
		while (h < c2) {
			a[i] = 1;
			h += k;
		}
	}
	
	for (int i = 3; i <= c2; i++) {
		int c1 = (int)(c / i) * i + i - c;
		
		if (a[i] == 1) {
			goto l210;
		}
		
		l190:
		if (c1 > 999) {
			continue;
		}
		
		b[c1] = 1;
		
		l210:
		c1 += i;
		goto l190;
	}
	
	std::cout << std::setprecision(0) << std::fixed;
	
	for (int i = 1; i < 1000; i += 2) {
		if (b[i] == 0) {
			std::cout << (c + i) << "\t";
		}
	}
	
	std::cout << std::endl;
}
