#include <iostream>

using namespace std;
int main() {
/*
when you know how many times you want to loop through a block
of code, use the for loop instead of the while loop.
Statement 1 is executed (one time) before the execution of the code block.

for (statement 1; statement 2; statement 3) {
  // code block to be executed
}

Statement 2 defines the condition for executing the code block.
Statement 3 is executed (every time) after the code block has been executed.
The example below will print the numbers 0 to 4:
*/

for(int x = 0; x < 5; x++) {
cout << x << endl;
}

/*
what happen in the code above?
statement 1 set a variable call x to zero,
statement 2 defines the logic, as long as x is less than 5,
the loop will keep running.
statement 3 increase x by 1 everytime the runs 
*/

// printing 7 multiplication table using for loop
for(int x = 1; x < 13; x++) {
cout << "7 * " << x << " = " << (7 * x) << endl;
}

/*
what happen in the code above?
statement 1 set a variable call x to 1,
statement 2 induce that x is less than 13, that is the loop
should keep running as long as x is less than 13,
statement 3 increase x by 1 everytime the runs 
*/

/* 
Using Nested for loop
you can place a loop inside a loop

*/
// print 2 - 12 times multiplication table using for loop
for (int i = 2; i < 13; i++) {
cout << "This is " << i << " times multiplication table" << endl;
for (int j = 2; j < 13; j++) {
cout << i << " * " << j << " = " << (i*j) << endl;
}
cout << " " << endl;
}

/*
What Happen above?
- for (int i = 2; i < 13; i++) : 
The first statement create a variable i assign 2 to it
The second statement checks if the variable is less than 13,
so the loop runs for as long as i is less than 13
the third statment increments the varibale by one - so the
loop will only run for 13 times

- cout << "This is " << i << " times multiplication table" << endl;
each time the loop runs it print out This is (value of i) times multiplication table

- for (int j = 2; j < 13; j++) {
each time the first loop run, this loop run, it pretty
the same thing with the above loop

- cout << i << " * " << j << " = " << (i*j) << endl;
this print out the value of i multiply by j
*/

/*
For each loop
You use this loop to iterate over a sequence like an array
*/

int myNumbers[5] = {4, 6, 3, 7, 8};
cout << "We wants to print out all the number in the array" << endl;
for (int i : myNumbers){
cout << i << endl;
}

/*
Using break and continue in for loop 
*/

string student_name[5] = {"Frank", "Gleen", "Kolade", "Eric", "John"};

for(string s : student_name) {


if(s == "Gleen"){
continue; 
}
cout << s << endl;
if (s == "Eric")
{
cout << "The loop will now stop on eric ignoring John" << endl;
break;
}

}
}