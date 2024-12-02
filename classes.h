#include "libs.h"

class Complex
{
private:
	float re, im;
public:
	Complex(float r_p, float i_p) : re(r_p), im(i_p) {}
	Complex operator+(const Complex& n_1)
	{
		return Complex(re + n_1.re, im + n_1.im);
	}
	Complex operator-(const Complex& n_1)
	{
		return Complex(re - n_1.re, im - n_1.im);
	}
	Complex operator*(const Complex& n_1)
	{
		return Complex((re * n_1.re) - (im * n_1.im), (re * n_1.im) + (im * n_1.re));
	}
	Complex operator/(const Complex& n_1)
	{
		float denominator = n_1.re * n_1.re + n_1.im * n_1.im;
		return Complex((re * n_1.re + im * n_1.im) / denominator,
			(im * n_1.re - re * n_1.im) / denominator);
	}
	void printFunc() const
	{
		cout << re << " + " << im << " * i" << endl;
	}
};