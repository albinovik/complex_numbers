#ifndef _COMPLEX_HPP_
#define _COMPLEX_HPP_

#include <string>

using namespace std;

class complex
{
private:
    double re;//real number
    double im;//imaginary number
public:
    complex();
    complex(double a, double b);
    //~complex();
    friend istream& operator>>(istream& in, complex& p);
    friend ostream& operator << (ostream &os, const complex &p);
    friend complex operator~(complex &p);
    complex operator+(const complex &p) const;
    complex operator-(const complex &p) const;
    double todouble();
    complex operator*(const complex &p) const;   
};

complex::complex()
{
    re = im = 0.0;
}

complex::complex(double a, double b)
{
    re = a;
    im = b;
}

istream& operator>>(istream& in, complex& p)
{
    in >> p.re >> p.im;
    return in;
}

ostream& operator << (ostream &os, const complex &p)
{
    os << "(" << p.re << ", " << p.im << "i)";
    return os;
}

complex operator~(complex &p) 
{
    complex tmp;
    tmp.re = p.re;
    tmp.im = -p.im;
    return tmp;
}

complex complex::operator+(const complex &p) const
{
    complex tmp;
    tmp.re = re + p.re;
    tmp.im = im + p.im;
    return tmp;   
}

complex complex::operator-(const complex &p) const
{
    complex tmp;
    tmp.re = re - p.re;
    tmp.im = im - p.im;
    return tmp;   
}

double complex::todouble()
{
    double k = 0.0;
    if (im == 0.0) k = re;
    return k; 
}

complex complex::operator*(const complex &p) const
{
    complex tmp;
    tmp.re = re * p.re - im * p.im;
    tmp.im = im * p.re + re * p.im;
    return tmp;   
}

#endif