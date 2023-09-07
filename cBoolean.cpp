#include <iostream>

using namespace std;

int main () {
/*
when solving problem in reel life
some asnwers will have to be either :
- True or False
- Yes or No (just like in electronics)
- Zero and One (just like binary in computer)

we use boolean data type in c++ to handle that

*/

bool isTodayMonday = true;
bool isItInteresting = false;

cout << isTodayMonday << endl;
cout << isItInteresting << endl;

/*
You can use comparison operator 
to find out if an expression is true or not

*/
cout << (5 < 9) << endl;
cout << (5 > 9) << endl;
cout << (5 == 9) << endl;

/*
in real life boolean are mostly use
along with conditional statement,
take for example a grocery store wants
to do a giveaway to customer, base on
on how much they spend.

The give way starts with customer who buy goods above 20 dollas
$20 - $60 : get a pack of coffee
$61 - $80 : get an airpod;
$81 - $100 : get a smart watch
above $100 : get a blender;

we can compare the ammount spent by the customer with each of this
price range, if it is true with any of them we give them'
their gifts else we say no gift for them

*/

int customerSpend = 27;

if(customerSpend > 20 and customerSpend <= 60){
cout << "Congratulation you won a pack of coffee" << endl;
} else if(customerSpend > 61 and customerSpend <= 80){
cout << "Congratulation you won an airpod" << endl;
} else if(customerSpend > 81 and customerSpend <= 100){
cout << "Congratulation you won asmart watch" << endl;
} else if(customerSpend > 100){
cout << "Congratulation you won a blender" << endl;
} else {
cout << "To win a gift buy an item above $20" << endl;
}

}