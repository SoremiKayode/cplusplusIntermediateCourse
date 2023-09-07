#include <iostream>

using namespace std;

int main() {
/*
a reference variable is a variable assign to another
variable. and we use & preceded by the variable
*/

string variable1 = "Bingos";
string &variable2 = variable1;

cout << "variable 1 : " << variable1 << endl;
cout << "variable 2 : " << variable2 << endl;

}