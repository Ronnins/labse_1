#include "Complex.h"
#include <cmath>

using namespace std;

constexpr double EPS = 1e-6;

Complex::Complex()
    : real(0), img(0)
{
}

Complex::Complex(double real, double img)
    : real(real), img(img)
{
}

double Complex::getReal() const
{
    return real;
}

double Complex::getImg() const
{
    return img;
}

string Complex::toString() const
{
    string str_result = "real = " + to_string(real) + " img = " + to_string(img);
    return str_result;
}

void Complex::setReal(double new_real)
{
    real = new_real;
}

void Complex::setImg(double new_img)
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
    double new_real = (real * another.real) - (img * another.img);
    double new_img = (real * another.img) + (img * another.real);

    real = new_real;
    img = new_img;
}

bool Complex::div(const Complex& another)
{
    double sec_squares = (another.img * another.img) + (another.real * another.real);

    if (sec_squares == 0.0) {
        return false;
    }

    double new_real = ((real * another.real) + (img * another.img)) / sec_squares;
    double new_img = ((img * another.real) - (real * another.img)) / sec_squares;

    real = new_real;
    img = new_img;
    return true;
}

bool Complex::equ(const Complex& another) const
{
    return (abs(real - another.real) < EPS) && (abs(img - another.img) < EPS);
}

Complex Complex::conj() const
{
    return Complex(real, -img);
}
