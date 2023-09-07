#include <iostream>

using namespace std;

int main(){
/*
The switch statement is like the if statement
it use use to select the code to be executed if a condition
is met
*/

int day_of_week = 4;

switch(day_of_week) {
case 1 :
    cout << "Today is Monday" << endl;
    break;
case 2 :
    cout << "Today is Tuesday" << endl;
    break;
case 3 :
    cout << "Today is Wednesday" << endl;
    break;
case 4 :
    cout << "Today is Thursday" << endl;
    break;
case 5 :
    cout << "Today is Friday" << endl;
    break;
case 6 :
    cout << "Today is Saturday" << endl;
    break;
case 7 :
    cout << "Today is Sunday" << endl;
    break;
default :
    cout << "looking forward to the weekend" << endl;

}
}