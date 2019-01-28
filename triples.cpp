#include <stdio.h>
#include <iostream>
#include <iomanip>

int main(int argc, char *argv[]) {
	int a[6];
	int n = 0;
	
	a[0] = 2;
	a[1] = 3;
	a[2] = 5;
	a[3] = 7;
	a[4] = 11;
	a[5] = 13;
	
	std::cout << std::setprecision(0) << std::fixed;
	
	for (int p = 2; p < 32; p++) {
		for (int q = 1; q < p; q++) {
			if (p * p + q * q > 1000) {
				continue;
			}
			
			if ((p % 2) + (q % 2) == 2) {
				continue;
			}
			
			int k = 1;
			bool exit = false;
			
			while (k < 7) {
				if (p % a[k] == 0 && q % a[k] == 0) {
					exit = true;
					break;
				}
				
				k++;
			}
			
			if (exit) {
				continue;
			}
			
			n++;
			
			std::cout << (p * p + q * q) << "\t" << (p * p - q * q) << "\t" << (2 * p * q) << std::endl;
		}
	}
	
	std::cout << "Number of triples: " << n << std::endl;
}
