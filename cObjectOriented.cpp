#include <iostream>
using namespace std;
/*
we have use variable and functions, these are call 
procedural programming, in objected oriented programming
(OOP) we're writing code in a way to try to mimick a real life
object, take for instance a car, cars have attribute like :

- the year it was make
- the model name
- the engine 
- the speed limit etc.
These are like varibales in procedural, but they are 
call properties

cars can also perform some functionality like
- You can start it
- you can accelerate
- you can march the brake

These are like functions in preocedural but they are call
method in OOP

So OOP can be viewed as grouping variable and functions in one place
in c++ oop lloks like this

class Car {
private:
    // Properties (Attributes)
    string make;
    string model;
    int year;
    float speed;

public:
    // Methods (Functions)
    void start();
    void accelerate();
    void brake();
};

The above is call class definition,
In the class definition, you define the attributes
(properties) of a car (e.g., make, model, year, speed)
as well as methods (functions) that the car can perform
(e.g., start, accelerate, brake).

Car myCar;
Create an instance (object) of the Car class

You can use the methods of the myCar object to make
it perform actions like starting, accelerating,
and braking.
myCar.start();       // Start the car
myCar.accelerate();  // Increase the car's speed
myCar.brake();       // Apply the brakes


*/
class Car {
private:
    // Properties (Attributes)
    string make;
    string model;
    int year;
    int speed = 56;

public:
    // Methods (Functions)
    void start(){
    cout << "The Car is starting " << endl;
    };

    void accelerate() {
    cout << "The car is now accelerating at the speed " << speed << " Kilometer per hour " << endl;
    };

    void brake(){
    cout << "Brake will be applied soon" << endl;
    };
};

/*
Constructor
A constructor is a method that is automatically call
when an object is created.

You create a constructor by simply creating a method
that bears the name of the class.
*/

class mobilePhone {
public:
    mobilePhone() {
        cout << "This class contain info about some mobile devices" << endl;
    }

};

/*
The constructor can also take some parameters
*/

class mobileGadget {
    public :
       mobileGadget(int screenSize, int batteryCapacity) {
        cout << "The screen size is : " << screenSize << " inches" << endl;
        cout << "The battery capacity is : " << batteryCapacity << " MAH" << endl;
       };
};


/*
Access specifier
Access specifier defines how thw members of a class 
can be accessed, the three access specifier are : 

public : members are accessed from outside the class
private : members cannot be accessed from outside the class
protected : members cannot be accessed from outside the class
but can be accessed by class who inherited it

By default all members of a class are private if you 
don't include the specifier.
*/

class saySomething {
public :
    int x = 90;
    int sayX(){
        cout << "x" << endl;
        return 0;
    }

private : 
    int y = 50;
    int sayY(){
        cout << "y" << endl;
        return 0;
        
    }

protected :
    int z = 100;
    int sayZ(){
        cout << "z" << endl;
        return 0;

    }
};

/*
Encapsulation

in Encapsulation you restrict access to some certain members
outside the class and you create a public method (function)
that will be use to get or modify the members, these
method are call getters and setters. getters get,
while setters set.
*/

class students {
private :
    string name;
    int age;

public :
    students(string name, int age) : name(name), age(age) {};
    //method to get the name
    string getName() {
        return name;
    };
    // method to get the age
    int getAge() {
        return age;
    };
    // method to set the name
    void setName(string newName) {
        if(name != " ") 
        {
            name = newName;
        }
    };
    // method to set the age
    void setAge(int newAge) {
        if(newAge > 0){
            age = newAge;
        }
    };

};


int main(){
// creating an object of the class
Car Toyota;

/* Then we can access the properties and method of the class
using the object instance created above
*/
Toyota.accelerate();
Toyota.start();
Toyota.brake();

/* immediately you create an object of the class, the 
mobilePhone method should run */

mobilePhone Samsung;

/* You can call the object of the class by simply passing the 
constructor parameters  */
mobileGadget smartTelevision(40, 5000);

/*When you access the public it will work
however the private and protected will give you an error message
*/

saySomething saySomething;

cout << " This will print out x" << endl;
saySomething.sayX();

// saySomething.sayY();
// saySomething.sayZ();

// using encapsulation

students student("Bolade", 45);

cout << "printing out information about student before change" << endl;
cout << "This is student Name : " << student.getName() << endl;
cout << "This is student age : " << student.getAge() << endl;

cout << "printing out information about student after change" << endl;
student.setAge(34);
student.setName("Abiola Rogues");

cout << "This is student Name : " << student.getName() << endl;
cout << "This is student age : " << student.getAge() << endl;

}