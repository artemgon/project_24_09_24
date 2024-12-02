#include "classes.h"

int main()
{
    Fraction f1(3, 4);
    Fraction f2(2, 5);
    cout << "Fraction 1: ";
    f1.printFunc();
    cout << "Fraction 2: ";
    f2.printFunc();
    Fraction sum = f1 + f2;
    cout << "Sum: ";
    sum.printFunc();
    Fraction difference = f1 - f2;
    cout << "Difference: ";
    difference.printFunc();
    Fraction product = f1 * f2;
    cout << "Product: ";
    product.printFunc();
    Fraction quotient = f1 / f2;
    cout << "Quotient: ";
    quotient.printFunc();
	return 0;
}