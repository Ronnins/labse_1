#pragma once
#include <string>

using namespace std;

class Complex
{
    double real, img;

public:
    Complex();
    Complex(double real, double img);

    double getReal() const;
    double getImg() const;
    string toString() const;

    void setReal(double new_real);
    void setImg(double new_img);

    void add(const Complex& another);
    void sub(const Complex& another);
    void mul(const Complex& another);
    bool div(const Complex& another);
    bool equ(const Complex& another) const;
    Complex conj() const;
};
