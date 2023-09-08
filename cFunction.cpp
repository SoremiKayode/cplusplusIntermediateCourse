#include <iostream>

using namespace std;

/*

A function is use to group code together.
- when you have a functionality that you need to use multiple
time, function is what you need, you can write it once, and call
it multiple time

- some variables may have to change depending on use cases,
you can achieve that in function using parameter,
take for instance you want to calculate the average  score of an
examination for different classes and different subject, you
can create a function which accept parameters as
student class and subject offered.

*/
void myFunction(int a, int b, int c){
    cout << "The result is : " << (a + b * c) << endl;
};

/*
Above we have declare a function

- the first thing there is void : it means the function will
not return anything, if you want it to return some thing 
you can use int, string, float, bool, double dedpending on 
the data type you want it to return.

- after that we have the name of the function myFunction

- inside the parathensis we have the parameters, the
parameters are like variable you want to use int the
body of your function. When you call
the function, you will have to pass in these parameters,
when you pass them in they are call arguments

- inside the curly bracket is where you write your code
*/

/*
You can specify a default parameter in a function
*/
int calculate(int numbers = 77) {
cout << "function calculate result... : " << (numbers * 7) << endl;
return 0;
};


/*
returning a value in your function
*/

string yourName(string name) {
return "Your name is " + name;
};


/*
 using  array as parameter in your functio.
*/
int calcMean(int meanValue[5], int arraysize){
int sum;
int sizeOfArray = arraysize / sizeof(int);
for (int x = 0; x < sizeOfArray - 1; x++) {
sum += meanValue[x];
};

cout << "The mean score is : " << endl;
return (sum / sizeOfArray);

};

/*
Function overloading

with function overloading multiple function
can have the same name, different parameters, and different
data type
*/

int addValue(int x, int y) {
return x * y;
}

double addValue(double x, double y){
return x * y;
}

/*
Recursion :
it is normal to call a function inside another
function, but you can also call a function inside itself
that is a method we call recursion in programming

in the function below we wants to calculate the 
factorial of a number.
*/

int factorials(int n) {
if(n == 0) {
return 1;
} else {
return n * factorials(n - 1);
}
 
}

/*
Assume the number is 10

10 * factorials(9)
10 * ( 9 * factorials(8) )
10 * ( 9 * ( 8 * factorials(7) ) )
10 * ( 9 * ( 8 * (7 * factorial(6))) ) )
...
10 * 9 * 8 * * + 6 * 5 * 4 * 3 * 2 * 1 * factorials(0)
10 * 9 * 8 * * + 6 * 5 * 4 * 3 * 2 * 1 

after expanding all then it do the multiplication

*/

int main(){
/*
here we are calling the function above and passing in
the necessary arguments
*/
myFunction(33, 44, 55);

//you can either call the function with argument or
// without arguments
calculate();
calculate(66);

// printing out the return value in yourName function
cout << yourName("Kolade") << endl;


int student_score[5] = {45, 6, 7, 10, 34};
int arraySize = sizeof(student_score);
cout << calcMean(student_score, arraySize) << endl;;

cout << endl;
cout << "Using overloaded function" << endl;

cout << "This is the int of addValue function : " << addValue(5, 7) << endl;
cout << "This is the double of addValue function : " << addValue(5.5, 7.3) << endl;

cout << endl;
cout << "Using recursive function" << endl;

cout << "This is the factorial of 7 : " << factorials(5) << endl;
}