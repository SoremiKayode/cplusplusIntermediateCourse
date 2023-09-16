#include <iostream>

using namespace std;

int main(){

/*
if there is an error in your code, the compiler will'
stop and throw an error, you can manually handle the 
error yourself.
we use try, throw and catch to handle exception in c++

try : is expecting a block of code to run, it is the action
that you want to take.
throw : the throw allow us to create a custom error
catch : the catch is what should happen should the error
be detected.
*/


try {
    int age  = 19;
    if(age < 16){
        cout << "welcome you have been accepted into the team" << endl;

    } else {
        throw(age);
    }
} catch(int ageSupplied) {
cout << "Your age is  : " << ageSupplied << endl;
cout << "You are older than the age required " << endl;
}


/*
alternatively you can use ... dot sign
if you do not know the type of exception to catch


*/

try {
    int height  = 19;
    if(height < 16){
        cout << "welcome you have been accepted into the team" << endl;

    } else {
        throw(height);
    }
} catch(...) {
cout << "You do not meet the height requirement for the team " << endl;
}
}