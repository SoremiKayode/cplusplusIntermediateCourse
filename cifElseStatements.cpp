#include <iostream>

using namespace std;

int main () {
/*
we use conditions alot in programming
- if the battery of the laptop is less than 5% - shut down
- if the email and password of a user is 
not in the database go ahead and add it,
then send a message to them that they have 
successfully registered else tell them you've
already register, please login.
- if long press ctrl and s, go ahead and write
logic that save the file.
- if the output of the temperature sensor reads
above 14 degrees celsius, turn on the air conditional

=======================================================
we use if else elif or switch for the conditions,
and we usually use them alongside the logical
operator 

if ( temperature >= 14.0){
turn on air conditional
}

*/

int hourOfTheDay = 11;
// if checks a condition
if (hourOfTheDay < 12 ){
cout << "Good Morning" << endl;
} 
// else if check for the other conditions
else if (hourOfTheDay >= 12 and hourOfTheDay < 16){
cout << "Good afternoon" << endl;
}
// else occur when we have reached the last condition 
// or their are no more conditions to check
else {
cout << "Good Evening" << endl;
}

/*
There is a short hand if else, 
it is call the the ternary operator

*/

// instead of using 
if(hourOfTheDay < 12) {
cout << "Good Morning" << endl;
}

// we can use
string result = (hourOfTheDay < 12) ? "Good Morning" : "Good evening";
cout << result << endl;
}



