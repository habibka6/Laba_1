#include<iostream>

int add(int a, int b);
int subtract(int a, int b);
int main() {
	int x = 9;
	int y = 3;
	std::cout << "sum(+): " << add(x, y) << std::endl;
	std::cout << "difference(-): " << subtract(x, y) << std::endl;
	std::cout << "I CHANGED(added) THIS IN MAIN" << std::endl;
	return 0;
}