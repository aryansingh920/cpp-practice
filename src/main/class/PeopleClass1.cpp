#include "../DSA_Master.h"

// 1. "Interfaces" in C++ are called "Abstract Classes"
// They have at least one "pure virtual" function (the = 0 part)
class IEntity
{
public:
    virtual void logName() = 0; // Pure virtual function (Abstract)
};

// 2. Inheritance: Person "is an" IEntity
class Person : public IEntity
{
private:
    // PRIVATE: Only accessible inside this class
    int age;
    static int count; // STATIC: Shared by ALL Person objects

public:
    string name; // PUBLIC: Accessible anywhere

    // 3. CONSTRUCTOR
    Person(string name, int age)
    {
        // 4. 'this' KEYWORD: A pointer to the current object
        this->name = name;
        this->age = age;
        count++; // Increment global counter
    }

    // 5. PUBLIC FUNCTION
    int getAge() { return age; }

    // 6. STATIC FUNCTION: Can be called without an object (Person::getCount())
    static int getCount() { return count; }

    // 7. Implementing the "Interface" function
    void logName() override
    {
        cout << "Entity Name: " << name << endl;
    }
};

// 8. STATIC INITIALIZATION
// In C++, you must define static members outside the class
int Person::count = 0;

// 9. GLOBAL VARIABLE (Lives outside all classes/functions)
int globalSystemID = 999;

int main()
{
    Person p1("Alice", 25);
    Person p2("Bob", 30);

    cout << "Total People: " << Person::getCount() << endl; // Output: 2
    p1.logName();

    return 0;
}
