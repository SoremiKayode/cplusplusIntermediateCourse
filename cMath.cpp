#include <iostream>
#include <cmath>

using namespace std;

int main () {
/*
c++ has many math operation that allow you
to perform mathematical operation, to use these
math operation you need to import math, except
using the min and max

some of the math operation include:

abs(x)	Returns the absolute value of x
acos(x)	Returns the arccosine of x
asin(x)	Returns the arcsine of x
atan(x)	Returns the arctangent of x
cbrt(x)	Returns the cube root of x
ceil(x)	Returns the value of x rounded up to its nearest integer
cos(x)	Returns the cosine of x
cosh(x)	Returns the hyperbolic cosine of x
exp(x)	Returns the value of Ex
expm1(x)	Returns ex -1
fabs(x)	Returns the absolute value of a floating x
fdim(x, y)	Returns the positive difference between x and y
floor(x)	Returns the value of x rounded down to its nearest integer
hypot(x, y)	Returns sqrt(x2 +y2) without intermediate overflow or underflow
fma(x, y, z)	Returns x*y+z without losing precision
fmax(x, y)	Returns the highest value of a floating x and y
fmin(x, y)	Returns the lowest value of a floating x and y
fmod(x, y)	Returns the floating point remainder of x/y
pow(x, y)	Returns the value of x to the power of y
sin(x)	Returns the sine of x (x is in radians)
sinh(x)	Returns the hyperbolic sine of a double value
tan(x)	Returns the tangent of an angle
tanh(x)	Returns the hyperbolic tangent of a double value
*/

// getting the  minimum number
cout << "Minimum number : " <<  min(5, 6) << endl;
//getting the maximum number
cout << "Maximum number : " << max(5, 6) << endl;
//square root
cout << "square root : "<< sqrt(64) << endl;
// logarithm
cout << "logarithm : " << log(2) << endl;
// round up a number
cout << "rounding : " << round(4.566) << endl;
// return absolute value
cout << "absolute value : " << abs(-34) << endl;
// round up to the nearest interger
cout << "round up to nearest interger : " << ceil(2.67) << endl;
// return exponent
cout << "exponent : " << exp(6) << endl;
// round down to nearest interger
cout << "round down to nearest interger : " << floor(6.1) << endl;
// finding the cube root
cout << "cube root : " << cbrt(9) << endl;






}