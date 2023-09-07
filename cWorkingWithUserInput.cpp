#include <iostream>
/*
in c++ we use cout to print out output
while we use cin pronouced as see-in to receive 
input from the user
*/

using namespace std;

int main(){
/*
Here we declare a variable output_value
to receive the input. we then display it
o
*/
int output_value;

cout << "Type a number \n";
cin >> output_value;
cout << "Your number is : " << output_value << endl;

/*
creating a simple calculator, our
calculator receive three input, the 
two number to perform operation on and 
the operation to be performed
*/

int first_number, second_number;
string operands;

cout << "Type the first number" << endl;
cin >> first_number;
cout << "Type the second number" << endl;
cin >> second_number;
cout << "Type the operand" << endl;
cin >> operands;

/* 
we use if else statement to check 
the artithemetic operation of the operands
if the operand is not +. -, /, or *
we tell the program
*/
if(operands == "+") {
cout << "The result is : " << first_number + second_number;
} 
else if (operands == "*") {
cout << "The result is : " << first_number * second_number;
}
else if (operands == "/") {
cout << "The result is : " << first_number / second_number;
}
else if (operands == "-") {
cout << "The result is : " << first_number - second_number;
}
else {
cout << "The operand is not recognized";
}

return 0;

}
