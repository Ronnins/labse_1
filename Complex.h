#pragma once
#include <string>
class Complex
{
	double real, img;
public:
	Complex();
	Complex(const double& real, const double& img);

	double getReal();
	double getImg();
	std::string toString();
	void setReal(const double& new_real);
	void setImg(const double& new_img);

	void add(const Complex& another);
	void sub(const Complex& another);
	void mul(const Complex& another);
	void div(const Complex& another);
	const bool equ(const Complex& another);
	Complex conj();

};

