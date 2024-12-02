#include "classes.h"

int main()
{
	Complex c_n_1(3, 4), c_n_2(1, 2);
	cout << "Sum: ";
	Complex sum = c_n_1 + c_n_2;
	sum.printFunc();
	cout << "Difference: ";
	Complex difference = c_n_1 - c_n_2;
	difference.printFunc();
	cout << "Product: ";
	Complex product = c_n_1 * c_n_2;
	product.printFunc();
	cout << "Quotient: ";
	Complex quotient = c_n_1 / c_n_2;
	quotient.printFunc();
	return 0;
}