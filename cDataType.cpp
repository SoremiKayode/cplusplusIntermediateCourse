#include <iostream>

using namespace std;

int main() {


/*
following are the data type we have and the space they occupy
in the memory of the computer

data     size           value store
boolean	 1 byte	        Stores true or false values
char	 1 byte	        Stores a single character/letter/number, or ASCII values
int	     2 or 4 bytes   Stores whole numbers, without decimals
float	 4 bytes	    Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
double	 8 bytes	    Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
*/

// Numeric Type

// interger
int cInterger = 25;
cout << "This is an interger : " << cInterger << endl;

// float

int cFloat = 3.6;
cout << "This is a float : " << cFloat << endl;

double cDouble = 1.0;
cout << "This is a Double : " << cDouble << endl;
/*
Note : 
The difference between double and float
it the floating point precision (The number of digit after a decimal)
float has 6 digit precision while double have 15 points.

*/

/*
Numbers can also be  scientific numbers
with an e, the e represent how man zeros
*/ 

float eNum1 = 23e5;
double eNum2 = 23E5;

cout << "This is a scientific number : " << eNum1 << endl;
cout << "This is a scientific number : " << eNum2 << endl;

// BOOLEANS
/*
Booleans are simply true or false
true is  = 1,
while false is = 0
*/

bool isRaining = true;
bool isNotRaining = false;

cout << isRaining << endl;
cout << isNotRaining << endl;

// Characters
/*
As the name sounds, they are single character
and they are represented by char, 
Note : use single quotation for char
*/

char myGrade = 'B';
cout << myGrade << endl;


// Strings
/*
the string data type is a sequence 
of characters, it must be surrounded by double quote
you may need to include the string library
#include <string>, however without it it will work
*/

string sayMe = "Hello world!";
cout << sayMe << endl;

return 0;
}