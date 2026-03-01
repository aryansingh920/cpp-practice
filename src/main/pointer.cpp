#include <iostream>
using namespace std;

int *heapPrimitive()
{
    // 1. Allocate 4 bytes on the HEAP to hold the number 5.
    // 2. Create a pointer 'p' on this function's STACK frame to hold that address.
    int *p = new int(5);

    cout << "Inside function, address is: " << p << endl;

    // 3. Return the ADDRESS (the value of p) to the caller.
    return p;
} // The local variable 'p' dies here, but the HEAP memory (the '5') survives!

int main()
{
    // 4. Receive the address from the function.
    int *mainPtr = heapPrimitive();

    // 5. Read the value at that address.
    cout << "In main, address received: " << mainPtr << endl;
    // Dereferencing the value
    cout << "The value at that address is: " << *mainPtr << endl;

    // 6. Manual cleanup.
    // If we don't do this, the 4 bytes on the heap stay "leaked" until the program exits.
    delete mainPtr;

    // 7. Hygiene: Set to nullptr so we don't accidentally use it again.
    mainPtr = nullptr;

    return 0;
}
