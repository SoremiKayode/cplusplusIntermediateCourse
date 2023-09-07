#include <iostream>

using namespace std;



int main(){
/*
struct allows you to group different variable
of different data type together.

To declare a structure use the word struct
inside the struct declare the item of the structure,
out side of the curly brackets, declare the variable
holding the structure.
*/
struct {
string myName;
int myValue;
double myCarNum;
} myGroup;

myGroup.myName = "Kayode";
myGroup.myValue = 30;
myGroup.myCarNum = 3.5;

cout << "My name : " << myGroup.myName << endl;
cout << "My value : " << myGroup.myValue << endl;
cout << "My car number : " << myGroup.myCarNum << endl;

/*
You can assign one structure to multiple variable
*/

struct {
int screenSize;
double memorySize;
string batteryStrength;
} samsung, nokia, iphone;

samsung.screenSize = 6;
samsung.memorySize = 128.0;
samsung.batteryStrength = "4000MAH";

nokia.screenSize = 7;
nokia.memorySize = 256.6;
nokia.batteryStrength = "6000MAH";

iphone.screenSize = 6;
iphone.memorySize = 128.0;
iphone.batteryStrength = "3000MAH";

cout << "Samsung Screen size : " << samsung.screenSize << endl;
cout << "Samsung Memory size : " << samsung.memorySize << endl;
cout << "Samsung Battery Strength : " << samsung.batteryStrength << endl;
cout << endl;

cout << "nokia Screen size : " << nokia.screenSize << endl;
cout << "nokia Memory size : " << nokia.memorySize << endl;
cout << "nokia Battery Strength : " << nokia.batteryStrength << endl;
cout << endl;

cout << "iphone Screen size : " << iphone.screenSize << endl;
cout << "iphone Memory size : " << iphone.memorySize << endl;
cout << "iphone Battery Strength : " << iphone.batteryStrength << endl;
cout << endl;

/*
you can use a structure as a datatype by
simply putting the varibale name just immediately 
after the struct 
*/

struct laptop {
string ramSize;
string screenSize;
string SSD;
};
// then you can create different variables to hold the structure 
// details
laptop dell;

dell.ramSize = "32GB";
dell.screenSize = "14 inches";
dell.SSD = "1 Terabyte";

laptop hp;
hp.ramSize = "32GB";
hp.screenSize = "14 inches";
hp.SSD = "1 Terabyte";

cout << "This is Dell ram size : " << dell.ramSize << endl;
cout << "This is Dell screen size : " << dell.screenSize << endl;
cout << "This is Dell SSD : " << dell.SSD << endl;
cout << endl;

cout << "This is hp ram size : " << hp.ramSize << endl;
cout << "This is hp screen size : " << hp.screenSize << endl;
cout << "This is hp SSD : " << hp.SSD << endl;
cout << endl;


}