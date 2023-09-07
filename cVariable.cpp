#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {
/*
some of the keyword of different type of varibale include: :
int :  for storing whole numbers
double : for storing numbers with decimals
char : for storing single character, it must be surrounded by single quote
string : for storing text
bool : for storing boolean values
*/
int integer_number = 23;
double double_number = 4.5;
char char_variable = 's';
string string_variable = "Hello world!";
bool boolean_variable = false;

// printing out all the variables above
cout << integer_number << endl;
cout << double_number << endl;
cout << char_variable << endl;
cout << string_variable << endl;
cout << boolean_variable << endl;

// combining both text and variable 
int myAge = 35;

cout << "I am " << myAge << "Years old";

// working with multiple variable
int x = 5, y = 7, f = 10;

cout << "This is the value of x: " << x << endl;
cout << "This is the value of y: " << y << endl;
cout << "This is the value of f: " << f << endl;

// Assigning same value to multiple variable

int g, h, r;
g = h = r = 7;

cout << "This is the value of g: " << g << endl;
cout << "This is the value of h: " << h << endl;
cout << "This is the value of r: " << r << endl;

// Using constant in c++
const int my_num = 12;
cout << "This ois a constant : " << my_num << endl;
}