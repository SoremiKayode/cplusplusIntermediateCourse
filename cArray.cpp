#include <iostream>

using namespace std;

int main() {
/*
array are use to store a list of item
it is use to store multiple values inside 
on veribele instead of declaring a varibale for
each item

Note : 
unlike other programming languages, like python and javscript
an array can only contain a particular data type


*/
// declaring and assigning value to an array
string class_name[4] = {"Gleenex", "Sapphire", "Crewarderna", "Sacrimulus"};
int lenght_of_array = (sizeof(class_name) / sizeof(string)) - 1;
/*
To access the element
use the index (position) of the item you want to access
*/
cout << lenght_of_array << endl;
cout << "Acessing the first and last element : " << class_name[0] << " " << class_name[lenght_of_array] << endl;

// changing an element
class_name[0] = "Koetan";
class_name[1] = "Turany";
cout << "After changing an item " << class_name[0] << " " << class_name[1] << endl;

// looping through an array
for(int x = 0; x < lenght_of_array + 1; x++) {
cout << x << " : " << class_name[x] << endl;
}

cout << endl;
// using foreach loop
for(string x : class_name) { 
cout << x << endl;
}

/*
You can omit declaring the number of item in the array
*/

int my_scores[] = {1, 2, 3, 4, 5, 5, 6, 7};

cout << my_scores[10] << endl;

// To get the size of an array use sizeOf() 
cout << sizeof(my_scores) << endl;

/*
Multi-Dimensional Arrays
A multi-dimensional array is an array of arrays.

To declare a multi-dimensional array,
define the variable type, specify the
name of the array followed by square brackets
which specify how many elements the main array
has, followed by another set of square brackets which
indicates how many elements the sub-arrays have
*/

// 2 x 4 array, This is a two dimensional array
int customer_purchase[2][4] = {
{1, 2, 3, 4},
{7, 8, 9, 10},
};

// accessing multi dimensional array
// to access 2nd element of the first row
cout << endl;
cout << "To acess second element of the first row : " << customer_purchase[0][1] << endl;

// we also have a 3 dimensional array

float customer_database[2][2][5] = {
{
    {4.0, 5.0, 6.0, 7.0, 7.0},
    {8.0, 9.0, 9.0, 0.0, 2.0},
},

{
    {14.0, 16.0, 16.0, 17.0, 21.0},
    {18.0, 19.0, 19.0, 10.0, 12.0},
}
};

// accessing 3 dimensional array
/* 
to access first item in the first dimension
the second item in the second dimension
and the 5th item in the last dimension 
*/

cout << " 4 of 2 of 1 = " << customer_database[0][1][4] << endl;
}
