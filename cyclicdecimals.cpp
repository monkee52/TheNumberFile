#include <stdio.h>
#include <iostream>

int main(int argc, char *argv[]) {
	for (int n = 3; n < 1001; n += 2) {
		if (n % 5 == 0) {
			continue;
		}
		
		int x = 1;
		int p = 9 % n;
		
		while (p != 0) {
			p = (10 * p + 9) % n;
			x++;
		}
		
		if (p == 0) {
			std::cout << n << " repeats in " << x << " digits." << std::endl;
		}
	}
}
