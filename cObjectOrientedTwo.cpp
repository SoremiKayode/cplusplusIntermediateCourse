#include <iostream>
#include <string.h>

using namespace std;


/*
Inheritance 

Inheritance is when a class inherits the attributes and method
of another class

base class : this is the parent class, the class whose attribute
and method is inherited.

derived class : the children class, that is the 
class that inherit the attribute and method of the parent class


*/

// parent class
class Computer {
public :
    string category = "Laptop";
    int ram = 5;
    string screenSize = "14 inches";

    void details() {
        cout << "The type of the computer is : " << category << endl;
        cout << "The ram of the computer is : " << ram << endl;
        cout << "The screen size of the computer is : " << screenSize << endl;

    } 
};

/*
derived (children class)
To inherit a base class use : followed by name of the base class

*/
class laptop : public Computer {
private :
    string brand;
    string batteryCapacity;
public :
    laptop(string brand, string batteryCapacity) : brand(brand), batteryCapacity(batteryCapacity) {
        cout << "Laptop information are : " << endl;
        cout << "Laptop brand is : " << brand << endl;
        cout << "Laptop battery capacity is : " << batteryCapacity << endl;
        

    }
};

/*
using constructors in both the parent and child class

Here we are : 
- Going to use constructor in both classes
- going to use properties of the parent class
inside the child class
- we're going to access protected properties of the parent class

*/
class Vehicle {
/*
Here we declare the properties as protected
we will be accessing the properties in the 
derived (children) class
*/
protected : 
    string manufacturedYear; 
    string brandName;
public :
    // here we create the parent constructor class
    Vehicle(string brandName, string manufacturedYear) : brandName(brandName), manufacturedYear(manufacturedYear) {}


};

// we inherit the Vehicle class
class Car : public Vehicle {
    public :
        /*
        Here we create a constructor for this class, because
        we are inheriting from the vehicle class, we need to
        pass arguments to the Vehicle constructor, so what
        we're simply doing is pass the arguments coming from this 
        class to the vehicle class.
        */
        Car(string brand, string year) : Vehicle(brand, year) {
        cout << "These are the car details" << endl;
        cout << "The brand Name is : " << brand << endl;
        cout << "The brand Name is : " << year << endl;
            }
};


/*
Multiple and Multilevel Inheritance

multiple Inheirtance is when a class inherit from 
more than one class, multilevel in heritance is when a class
inherit from a child class.

we're going to create a class that inherit from the 
computer and laptop class
*/

class HardDrive : public laptop {
    public :
    string capacity;

    HardDrive(string brand, string battery, string capacity) : laptop(brand, battery), capacity(capacity) {
        cout << " This are the grand children details : " << endl;
        cout << "This is the brand : " << brand << endl;
        cout << "This is the battery : " << battery << endl;
        cout << "This is the capacity : " << capacity << endl;
    }

    };

/*
PolyMorphism

polymorphism is a concept in object oriented programming 
(OOP), it describe the ability of something to be use in more
than one form, say a a children (derived) class can
have the same method just as the base class, but it can do
different thing, and have different parameter

let say we have a class Animal, the Animal class can 
have a method makeSound, another class Cat can onherit the
Animal class and overide the makeSound method
*/

class Animal {
    public : 
        void makeSound(string sound){
            cout << "I can make the sound  : " << sound << endl;
        }
};

class Cat : public Animal {
public :
void makeSound(string sound){
cout << "I can make the sound  : " << sound << endl;

 }
};

class Dog : public Animal {
public :
void makeSound(string sound){
cout << "I can make the sound  : " << sound << endl;

 }
};

int main(){
/*
Here we create an object of the laptop class
and was able to access the properties of the computer class
*/
laptop laptops("Dell", "4000mah");
cout << laptops.category << endl;
cout << laptops.screenSize << endl;
cout << laptops.ram << endl;

Car Honda("Honda", "2024");

// calling the multi level inheritance class
HardDrive hardDrive("HP", "4000MAH", "4TERABYTE");

// polymorphism

Animal myAnimal;
Cat myCat;
Dog myDog;

myAnimal.makeSound("Cry");
myDog.makeSound("Bark");
myCat.makeSound("Mew");

return 0;
}