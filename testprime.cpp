#include <stdio.h>
#include <iostream>
#include <math.h>

int main(int argc, char *argv[]) {
	int n = 0;
	
	std::cout << "Enter number: ";
	std::cin >> n;
	
	int i = 2;
	int r = sqrt(n) + 1;
	
	if (n % 2 == 0) {
		std::cout << n << " is not prime. Divisible by " << i;
		return 0;
	}
	
	i = 3;
	
	while (i < r) {
		if (n % i == 0) {
			std::cout << n << " is not prime. Divisible by " << i;
			return 0;
		}
		
		i += 2;
	}
	
	std::cout << n << " is prime." << std::endl;
}
