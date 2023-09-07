#include <iostream>

using namespace std;

int main () {
/*
Operator are use to perform operation on
variable or values, following are the
category of operator we have in c++

Arithmetic operators
Assignment operators
Comparison operators
Logical operators
Bitwise operators

*/

// Arithemetic Operator 
/*

+	Addition	       use for addition	
-	Subtraction	       use for subtraction
*	Multiplication	   use for multiplication	
/	Division	       use for division
%	Modulus	           Returns the remainder after division
++	Increment	       Increases the value of a variable by 1
--	Decrement	       Decreases the value of a variable by 1

*/

int numOne = 21;
int num2 = 3;

cout << "Addition: " << numOne + num2 << endl;
cout << "Subtraction : " << numOne - num2 << endl;
cout << "Multiplication : " << numOne * num2 << endl;
cout << "Division : " << numOne / num2 << endl;
cout << "Modulus : " << numOne % num2 << endl;
cout << "Increment : " << ++numOne << endl;
cout << "Decrement : " << --numOne << endl;


// Assigment Operator

/*
Assigment Operator are you to assign 
value to a variable

List of all the assigment operator
=	x = 5	x = 5	
+=	x += 3	x = x + 3	
-=	x -= 3	x = x - 3	
*=	x *= 3	x = x * 3	
/=	x /= 3	x = x / 3	
%=	x %= 3	x = x % 3	
&=	x &= 3	x = x & 3	
|=	x |= 3	x = x | 3	
^=	x ^= 3	x = x ^ 3	
>>=	x >>= 3	x = x >> 3	
<<=	x <<= 3	x = x << 3	


*/

int a = 10;
int b = 10;
int c = 10;
int d = 10;
int e = 10;
int f = 10;
int g = 10;
int h = 10;
int i = 10;

a = 5;
b += 3;
c -= 3;
d *= 3;
e  /= 5;
f %= 5;
g &= 5;
h |= 5;
i ^= 5;

cout << "a = 5 : " << a << endl;
cout << "b += 3: " << b << endl;
cout << "c -= 3: " << c << endl;
cout << "d *= 3: " << d << endl;
cout << "e /= 5: " << e << endl;
cout << "f %= 5: " << f << endl;
cout << "g &= 5: " << g << endl;
cout << "h |= 5: " << h << endl;
cout << "i ^= 5: " << i << endl;

/*
Comparison operator are use to compare
two values or variable and it return a
boolean which is either true or false
that is 1 and 2

==	Equal to		
!=	Not equal		
>	Greater than	
<	Less than	
>=	Greater than or equal to		
<=	Less than or equal to	
*/

int l = 10 == 5;
int m = 10 < 5;
int n = 10 > 5;
int o = 10 <= 5;
int p = 10 >= 5;
int q = 10 != 5;

cout << "10 == 5 : " << l << endl;
cout << "10 < 5 : " << m << endl;
cout << "10 > 5 : " << n << endl;
cout << "10 <= 5 : " << o << endl;
cout << "10 >= 5 : " << p << endl;
cout << "10 != 5 : " << q << endl;

/*
Logical operators are use to determine
the logic between variable and value
it is either true or false
*/
int r = 2 < 4 && 4 < 7;
int s = 2 == 4 || 4 > 7;

cout << "true: " << r << endl;
cout << "false: " << s << endl;
}