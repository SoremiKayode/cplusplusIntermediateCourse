#include <iostream>
#include <string>

using namespace std;

int main(){
/*
string contain more than one character surrounded
by double quotes
*/

string greetings = "Hello world!";

cout << greetings << endl;


/*
string concatenation is adding string together
we use + or append to join string together
*/

string firstName = "John";
string lastName = " Barrow";

string fullname = firstName + " " + lastName;
string fullname2 = firstName.append(lastName);
cout << fullname << endl;
cout << fullname2 << endl;

/*
strings and numbers rule :
if you add two number you get a number
if you add two string you get a string
if you add string and number you get an error
*/

// adding number
int num1 = 10;
int num2 = 10;
int num3 = num1 + num2;
cout << num3 << endl;

// adding string
string st1 = "10";
string st2 = "20";
string st3 = st1 + st2;

cout << st3 << endl;

// to get the lenght of a string use length or size

string strlen = "Today is such an awesome day, Hurray!";
cout << "The lenght of the string is " << strlen.length() << endl;
cout << "The size of the string is " << strlen.size() << endl;

/*
Acessing and indexing a string charcater;
to access or index a string character 
you use the [] and provide the string position
you want ot access.

To change a character in a string, you use
you access the string then asign another string to it
*/

// acssing a string

string day_of_week = "Today is Monday";
cout << day_of_week[9] << endl;

// changing charcater of a string
day_of_week[9] = 'T';
cout << day_of_week << endl;

/*
Using special characters
if you have a string like this
"Shapespeare write "To err is human readable" "
c++ will misunderstood that and give an error
instead use backslash to as it to treat the quotation mark as 
on of the characters.


*/
// to treat a quotation mark as part of the string
string quote = "Shapespeare write \"To err is human readable\" ";
cout << quote << endl;

// 
string txt = "It's intersting.";
cout << txt << endl;

// inserting a backslash in a string
string back = "This is a \\ backslash.";

cout << back << endl;

// inserting a new line and tab key
string tabKey = "Something is wrong.\nSomeone said it out loud";
string tabKey2 = "Something is wrong. \t Someone said it out loud";

cout << tabKey << endl;
cout << tabKey2 << endl;


/*
Using string as input
when taking a text as input c++ treat space,
whitespace and tabs as terminating the string,
so always use getline().

*/

// string whatName;
// cout << "What is your name?" << endl;
// cin >> whatName;
// // try to type a two word seperated by a whitespace,
// // you will only get one of the word.
// cout << "My name is : " << whatName << endl;

// you can use getline to get the more than one word
// seperate by a space or tab.
string whatName2;
cout << "What is your second name?" << endl;
getline (cin, whatName2);
cout << "My name is : " << whatName2;

return 0;
}