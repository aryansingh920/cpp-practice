#include "../DSA_Master.h"

class Animal
{
protected:
    std::string species; // Accessible to children

private:
    int internalID; // NOT accessible to children directly

public:
    Animal(std::string s) : species(s), internalID(123) {}

    int getID() { return internalID; } // Child must use this to see the ID
};

class Dog : public Animal
{
public:
    // Calling the Parent Constructor
    Dog() : Animal("Canine") {}

    void bark()
    {
        // We can use 'species' because it is protected
        std::cout << "I am a " << species << " and I am barking!" << std::endl;
    }
};

int main()
{
    Dog myDog;
    myDog.bark();

    // std::cout << myDog.species; // ERROR: species is protected!
    return 0;
}
