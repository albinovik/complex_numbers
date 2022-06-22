#ifndef _COMPLEX_HPP_
#define _COMPLEX_HPP_

#include <iostream>
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
    //double operator*(const complex &p) const;  
};

#endif