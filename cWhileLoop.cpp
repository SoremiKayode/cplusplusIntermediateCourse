#include <iostream>
#include <unistd.h>
using namespace std;

int main () {
/*
while loop continue to execute a block 
of code until certain condtion is met

*/

int i = 1;
/* lets print out 5 times multiplication table
using while loop
*/
while(i < 13) {
cout << "5 * " << i << " = " << (i * 5) << endl;
i++;


}
/*
so what is happening above?
- we set i = 1
- we ask the loop to keep running as long as i is less than
13, in other words, for the the loop to stop running
something need to happen to i, such that the value will be
greater than one.
- to achieve the above, we add 1 to i, everytime the loop
runs.
*/

/*
in another example we are going to shut down our system
if the laptop is below 5%, we assume 5 percentage drains every 
1 seconds
*/
int laptop_percent = 100;

while (laptop_percent != 0) {
cout << "laptop percent: " << laptop_percent << "%" << endl;
sleep(1);


if(laptop_percent == 5) {
cout << "your battery percent is now at 5%,\nyour laptop will shut down" << endl;
break;
}

laptop_percent -= 5;
}

/*
what Happen here?

we have a battery percentage which is 100
we check if the percentgae is not equals to 0
of course 100 will always be not equals to zero
we need to find a way to make the battery percent zero
so that the loop can exit, wo we decide to remove 5 from the 
battery percent anytime the loop runs, we use the 
sleep function with an argument of 1, 
to ensure the loop run for every 1 seconds.

*/

/*
we also have do while loop;
do a certain thing
while a condition is yet to be met, to reprint the above
we will do something like this
*/
int phone_percent = 100;
do
{
cout << "phone percent: " << phone_percent << "%" << endl;
sleep(1);
if(phone_percent == 5) {
cout << "your battery percent is now at 5%,\nyour Phone will shut down" << endl;
break;
}

phone_percent -= 5;

} while (laptop_percent != 0);

/*
Using break and continue in while loop
*/
cout << "Using Continue and break " << endl;
int c = 0;

while(c < 10) {

if(c == 5) {
cout << c << " will be ommited, the statement below will not run for" << endl;
c++;
continue;
}
cout << "The value of c is now " << c << endl;

if (c == 8) {
cout << "I have decide to stop the loop at " << c << endl;
break;
}
c++;
}

}