//========================================================
// put all group names here
// Complex.cpp
// November 2023
// This file contains the class methods for the
// Complex number class.
//========================================================

#include "Complex.h"
#include <string.h>
#include <iostream>
#include <cmath>
using namespace std;


///======================================================
// default constructor
// initializes a Complex object to value 0
// PARAMETERS:
// none
// RETURN VALUE:
// none
//======================================================
                  Complex::Complex         (void)
{
                   a=0;
                   b=0;
}


//========================================================
//real and imaginary constructor
//initializes the object with the provided real and imaginary parts.
// PARAMETERS:
// none
// RETURN VALUE:
// none
//========================================================
                  Complex::Complex    ( double x, double y)
{
                  a=x;
                  b=y;
}



//========================================================
//Complex constructor
// creates a new Complex object by copying the contents of an existing Complex object c.
// PARAMETERS:
// c - existing Complex object
// RETURN VALUE:
// none
//========================================================
                  Complex::Complex    ( const Complex &c)
{
                  a=c.a;
                  b=c.b;
}




//========================================================
// setReal access method
// Change the real part of the complex number to the specified parameter.
// PARAMETERS:
// r - double value for the real part of the complex number
// RETURN VALUE:
// none
//========================================================
void              Complex::setReal             ( double r )
{
                  a=r;
}






//========================================================
// destructor 
// Does nothing useful here.  Placeholder for future
// cleanup if necessary.
// PARAMETERS:
// none
// RETURN VALUE:
// none
//========================================================
                  Complex::~Complex            ( void)
{
}







//========================================================
// getReal access method
// Return the real part of the complex number.
// PARAMETERS:
// none
// RETURN VALUE:
// Real part as a double
//========================================================
double            Complex::getReal             ( void ) const
{
                  return a;
}





//========================================================
// setImag
// Change the imaginary part of the complex number to the specified parameter.
// PARAMETERS:
// r - double value for the imaginary part of the complex number
// RETURN VALUE:
// none
//========================================================
void              Complex::setImag             ( double r )
{
                  b=r;
}






//========================================================
// getImag
// Return the imaginary part of the complex number.
// PARAMETERS:
// none
// RETURN VALUE:
// Real part as a double
//========================================================
double            Complex::getImag             ( void ) const
{
                  return b;
}






//========================================================
// assignment operator
// PARAMETERS:
// const Complex object c
// RETURN VALUE:
// first values of c are assigned to *this and then
// *this is returned
//========================================================
Complex           Complex::operator=       ( const Complex &c )
{
                 
                  a=c.a;
                  b=c.b;
                  return *this;
}

//========================================================
// addition operator int, float, complex
// operator+
// Will add the integer parameter to the real part of the complex number.
// PARAMETERS:
// integer i
// RETURN VALUE:
// returns comp after adding i to it
//========================================================
Complex           Complex::operator+       ( int i ) const
{
                  Complex comp;
                  comp.a= a+i;
                  comp.b= b;
                  return comp;
}
//========================================================
// Will add the double parameter to the real part of the complex number.
// PARAMETERS:
// double f
// RETURN VALUE:
// returns comp after adding f to it
//========================================================
Complex           Complex::operator+       ( double f ) const
{
                  Complex comp;
                  comp.a= double(a)+f;
                  comp.b= b;
                  return comp;
}

//========================================================
// Will add the Complex parameter c to another complex number comp.
// PARAMETERS:
// Complex c
// RETURN VALUE:
// returns comp after adding c to it
//========================================================
Complex           Complex::operator+       ( const Complex &c ) const
{
                  Complex comp;
                  comp.a= a+c.a;
                  comp.b= b+c.b;
                  
                  return comp;
}







//========================================================
// subtraction operator int, float, complex
// operator-
// Will subtract the integer parameter from the real part of the complex number.
// PARAMETERS:
// integer i
// RETURN VALUE:
// returns comp after subtracting i to it
//========================================================
Complex           Complex::operator-       ( int i ) const
{
                  Complex comp;
                  comp.a= a-i;
                  comp.b= b;
                  return comp;
}
//========================================================
// Will subtract the double parameter from the real part of the complex number.
// PARAMETERS:
// double f
// RETURN VALUE:
// returns comp after subtracting f to it
//========================================================
Complex           Complex::operator-       ( double f ) const
{
                  Complex comp;
                  comp.a= double(a)-f;
                  comp.b= b;
                  return comp;
}
//========================================================
// Will subtract the Complex parameter c from another complex number comp.
// PARAMETERS:
// Complex c
// RETURN VALUE:
// returns comp after subtracting c to it
//========================================================
Complex           Complex::operator-       ( const Complex &c ) const
{
                  Complex comp;
                  comp.a= a-c.a;
                  comp.b= b-c.b;
                  return comp;
}







//========================================================
// multiplication operator int, float, complex
// operator*
// Will take the complex number comp and multiply the real 
// and imaginary parts with the integer parameter i.
// PARAMETERS:
// interger i
// RETURN VALUE:
// returns comp, the product of the complex number and i
//======================================================
Complex           Complex::operator*       ( int i ) const
{
                  Complex comp;
                  comp.a= a*i;
                  comp.b= b*i;
                  return comp;
}
//========================================================
// operator*
// Will take the complex number comp and multiply the real 
// and imaginary parts with the double parameter f.
// PARAMETERS:
// double f
// RETURN VALUE:
// returns comp, the product of the complex number and f
//======================================================
Complex           Complex::operator*       ( double f ) const
{
                  Complex comp;
                  comp.a= double(a)*f;
                  comp.b= double(b)*f;
                  return comp;
}
//========================================================
// operator*
// Will take the complex number comp and multiply the real 
// and imaginary parts with the real and imaginary 
// parts of Complex parameter c.
// PARAMETERS:
// Complex c
// RETURN VALUE:
// returns comp, the product of the complex number and c
//======================================================
Complex           Complex::operator*       ( const Complex &c ) const
{
                  Complex comp;
                  comp.a= a*c.a - b*c.b;
                  comp.b= a*c.b + b*c.a;
                  return comp;
}








//========================================================
// division operators int, float, complex
// operator/
// Will take the complex number comp and divide the real 
// and imaginary parts with the integer parameter i.
// PARAMETERS:
// interger i
// RETURN VALUE:
// returns comp, the product of the complex number and i
//======================================================
//========================================================
Complex           Complex::operator/       ( int i ) const
{
                  Complex comp;
                  comp.a= a/i;
                  comp.b= b/i;
                  return comp;
}
//========================================================
// operator/
// Will take the complex number comp and divide the real 
// and imaginary parts with the double parameter f.
// PARAMETERS:
// double f
// RETURN VALUE:
// returns comp, the division of the complex number and f
//======================================================
Complex           Complex::operator/       ( double f ) const
{
                  Complex comp;
                  comp.a= double(a)/f;
                  comp.b= double(b)/f;
                  return comp;
}
//========================================================
// operator/
// Will take the complex number comp and divide the real 
// and imaginary parts with the integer parameter i.
// PARAMETERS:
// interger i
// RETURN VALUE:
// returns comp, the divison of the complex number and i
//========================================================
Complex           Complex::operator/       ( const Complex &c ) const
{
                  Complex comp;
                  comp.a= ((a*c.a) + (b*c.b))/((c.a*c.a) + (c.b*c.b));
                  comp.b= ((b*c.a)-(a*c.b))/((c.a*c.a) + (c.b*c.b));
                  return comp;
}








//======================================================
// exponentiation
// Computes the exponentiation of a complex number raised to an integer power p.
// PARAMETERS:
// int p
// RETURN VALUE:
// returns Complex comp after calculating a^p(The real part to the power p) and 
// b^p(the imaginary part to the power p)
//======================================================
Complex           Complex::operator^       ( int p ) const
{
                  Complex comp;
                  comp.a= pow(sqrt(a*a+b*b), p)*(cos(p*atan(b/a)));
                  comp.b= pow(sqrt(a*a+b*b), p)*(sin(p*atan(b/a)));
                  return comp;
                  
}








//========================================================
// operator~
// Used to flip the sign of the imaginary part of the 
//complex number
// PARAMETERS:
// none
// RETURN VALUE:
// returns Complex comp after flipping the sign of the 
// imaginary part
//========================================================
Complex           Complex::operator~       ( void ) const
{
                  Complex comp;
                  comp.b = -b;
                  comp.a = a;
                  return comp;
}







//========================================================
// abs
// Will take the components of absolute value of a complex number
// PARAMETERS:
// none
// RETURN VALUE:
// returns the absolute value of a complex number
//========================================================
double            Complex::abs             ( void ) const
{
                  return sqrt((a*a)+(b*b));
}





//========================================================
// negation
// Used to flip the sign of the imaginary and real part of the 
// complex number
// PARAMETERS:
// none
// RETURN VALUE:
// returns Complex comp after flipping the sign of the 
// imaginary and real part
//========================================================
Complex           Complex::operator-       ( void ) const
{
                  Complex comp;
                  comp.a = -a;
                  comp.b = -b;
                  return comp;
}







//========================================================
// equality operator
// Returns true if both imaginary and real parts are the same.
// PARAMETERS:
// Complex object c
// RETURN VALUE:
// true if c.a = a and c.b = b, false otherwise.
//========================================================
bool              Complex::operator==      ( const Complex &c ) const
{
                  if (c.a == a && c.b == b)
                  {
                     return true;
                  }
                  else
                  {
                     return false;
                  }
}








//========================================================
// inequality operator
// Returns true if both imaginary and real parts are not the same.
// PARAMETERS:
// Complex object c
// RETURN VALUE:
// false if c.a = a and c.b = b, true otherwise.
//========================================================

bool              Complex::operator!=      ( const Complex &c ) const
{
                  if (c.a != a || c.b != b)
                  {
                     return true;
                  }
                  else
                  {   
                     return false;
                  }
}







//========================================================
// overload << for cout
// Allows you to output complex numbers to an output stream
// PARAMETERS:
// ostream os
// Complex object c
// RETURN VALUE:
// ostream os
//======================================================
std::ostream & operator<< (std::ostream & os, const Complex &c)
{
                 os << c.a;
                 if (c.b >= 0)
                    os << " + " << c.b << "i";
                 else
                    os << " - " << -c.b << "i";
                 return os;
}









//========================================================
// overload << for cout
// Allows you to input complex numbers to an input stream
// PARAMETERS
// istream is
// Complex object c
// RETURN VALUE:
// istream is
//========================================================
std::istream & operator>> (std::istream & is, Complex &c) 
{
                char plusOrMinus;

                // Read real part
                is >> c.a;

                // Read '+' or '-'
                is >> plusOrMinus;

                // Read imaginary part
                is >> c.b;

                // Negate imaginary part if necessary
                if (plusOrMinus == '-')
                   c.b = -c.b;

                return is;
}























