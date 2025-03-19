#include <iostream>
#include <cmath>


// this program calculates the hypothenuse of a right angle triangle, using the folling equation:
// c = SqRt(a^2 + b^2)


int main() {
	double a, b, c;
	
	std::cout << "Enter side A: ";
	std::cin >> a;

	std::cout << "Enter side B: ";
	std::cin >> b;

	a = pow(a, 2);
	b = pow(b, 2);
	c = sqrt(a + b);

	std::cout << "Side C is: " << c << std::endl;
	
	return 0;
}
