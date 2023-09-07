#include <iostream>

using namespace std;
int main(){
/*
A pointer is the variable you created to store the 
memory adress of another variable 
to use a pointer suffix the variable declaration with a *
*/

string opinion = "Today is great";
string* opinionAdress = &opinion;

int i = 405;
int *iaddress = &i;

cout << "The value : " << opinion << endl;
cout << "The memory address : " << opinionAdress << endl;

cout << "The value of i : " << i << endl;
cout << "The memory address of i: " << iaddress << endl;

/*
You can get the value of the using the memory address
it is call dereference
*/
cout << endl;
cout << "Dereference of i : " << *iaddress << endl;
cout << "Dereference of opinionAdress : " << *opinionAdress << endl;

/*
You can change the pointer value, but please note 
that it will change the value of the variable itself.
*/

//changig the value of iaddress pointer

*iaddress = 200;

cout << "Changing the value of iadress pointer : 0 " << *iaddress << endl;
}