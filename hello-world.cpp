#include <iostream>

int sm(int a, int b) {
    return a + b;
}


int main() {
	std::cout << "Hello, World!" << std::endl;

    int a = 8;
    int b = 2;

    std::cout << "The sum of " << a <<  " and " << b << " is "  << sm(a, b) <<std::endl;

    
    return 0;
}