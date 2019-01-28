#include <stdio.h>
#include <iostream>
#include <iomanip>

int main(int argc, char *argv[]) {
	int p;
	int q;
	
	std::cout << "Enter initial values: ";
	std::cin >> p;
	std::cin >> q;
	
	std::cout << p << std::endl;
	std::cout << q << std::endl;
	
	std::cout << std::setprecision(16);
	
	for (int i = 1; i < 30; i++) {
		p = p + q;
		q = p - q;
		
		std::cout << p << "\t" << ((double)p / (double)q) << std::endl;
	}
}
