#include <stdio.h>
#include <iostream>

int main(int argc, char *argv[]) {
	int a[10000];
	
	for (int i = 3; i < 98; i += 2) {
		int r = 2 * i;
		int h = i * i;
		
		while (h < 10000) {
			a[h] = 1;
			h += r;
		}
	}
	
	std::cout << "2\t";
	
	for (int i = 3; i < 10000; i += 2) {
		if (a[i] == 0) {
			std::cout << i << "\t";
		}
	}
	
	std::cout << std::endl;
}
