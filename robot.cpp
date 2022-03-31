#include "robot.h"

Robot::Robot(string name, int health, double stamina) : //****************** 9. Initializer list
    Enemy(name, health, stamina) {} //****************** 2. Inheritance and cascading constructors

void Robot::typeOfAttack(){ //****************** 8. Abstract classes and pure virtual functions
    if(getName() == "robot")cout << "The robot hits you with his metal fists " << endl;

    else if(getName() == "robot-demon") cout << "The robot-demon hits you with his metal fists and metal hooves" << endl;
    }

void Robot::Attack(Character * a, Enemy * b){  //****************** 7. Virtual functions and polymorphism
    int random = rand() % 40 + 41;
    b->setStat(b->health - random, "health"); //****************** 3. Templates //****************** 6. Friends
    a->typeOfAttack();
    cout << "You damaged the " << b->name << " for " << random << " health" << endl << endl; //****************** 6. Friends

    if(name == "robot") random = rand() % 10 + 1;
    else if(name == "robot-demon") random = rand() % 40 + 20;

    b->typeOfAttack();
    a->setStat(a->health - random, "health"); //****************** 3. Templates //****************** 6. Friends
    cout << b->name << " damaged the " << a->name<< " for " << random << " health" << endl; //****************** 6. Friends
    if (b->health <= 0) //****************** 6. Friends
    {
        cout << endl << "You killed the " << b->name << endl; //****************** 6. Friends
            a->addItem(new Item("potion"));
            cout << "You picked up a potion off the " << b->name << endl; //****************** 6. Friends
        }
    }

void Robot::printName() //****************** 10. Dynamic and static dispatch
{
    cout << getName();
}
