#include <stdio.h>
#include <iostream>
#include <math.h>

int main(int argc, char *argv[]) {
	std::cout << "2\t";
	
	for (int n = 3; n < 1001; n += 2) {
		int i = 2;
		bool exit = false;
		
		while (i < sqrt(n + 1) && exit == false) {
			if (n % i == 0) {
				exit = true;
				break;
			}
			
			i++;
		}
		
		if (exit) {
			continue;
		}
		
		std::cout << n << "\t";
	}
	
	std::cout << std::endl;
}
