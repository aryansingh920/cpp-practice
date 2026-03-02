#include "DSA_Master.h"

// Notice the return type: unique_ptr<int>
unique_ptr<int> smartHeapPrimitive()
{
    // 2. Use make_unique instead of 'new'
    // This creates the '5' on the Heap and wraps it in a manager object
    unique_ptr<int> p = make_unique<int>(5);
    *p = *p + 10;

    cout << "Inside function, address is: " << p.get() << endl;

    // 3. Transfer OWNERSHIP to the caller
    return p;
}

int main()
{
    // 4. 'mainPtr' now "owns" the memory
    unique_ptr<int> mainPtr = smartHeapPrimitive();

    // 5. Use it just like a regular pointer
    cout << "The value at that address is: " << *mainPtr << endl;

    return 0;
    // 6. AUTOMATIC CLEANUP:
    // When mainPtr goes out of scope, it calls 'delete' internally.
    // No memory leak, no manual delete, no sweat.
}
