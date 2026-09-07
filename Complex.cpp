#include "Complex.h"

#define EPS 1e-6


Complex::Complex()
{
	img = 0;
	real = 0;
}

Complex::Complex(const double& real, const double& img)
{
	this->img = img;
	this->real = real;
}

double Complex::getReal()
{
	return real;
}

double Complex::getImg()
{
	return img;
}

std::string Complex::toString()
{
	std::string str_result = "real = " + std::to_string(real) + " img = " + std::to_string(img);
	return str_result;
}

void Complex::setReal(const double& new_real)
{
	real = new_real;
}

void Complex::setImg(const double& new_img)
{
	img = new_img;
}

void Complex::add(const Complex& another)
{
	img += another.img;
	real += another.real;
}

void Complex::sub(const Complex& another)
{
	img -= another.img;
	real -= another.real;
}

void Complex::mul(const Complex& another)
{
	real = (real * another.real) - (img * another.img);
	img = (real * another.img) + (img * another.real);
}

bool Complex::div(const Complex& another)
{
	double sec_squares = (pow(another.img, 2) + pow(another.real,2));
	if (sec_squares > EPS) {
		real = ((real * another.real) + (img * another.img)) / sec_squares;
		img = ((img * another.real) - (real * another.img)) / sec_squares;
	}
	}

const bool Complex::equ(const Complex& another)
{
	return (abs(real - another.real) < EPS) && (abs(img - another.img) < EPS);
}

Complex Complex::conj()
{
	return Complex(real, -img);
}






