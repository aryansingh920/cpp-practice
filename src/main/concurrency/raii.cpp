#include <iostream>

class HardwareResource
{
public:
    HardwareResource() 
    { 
        std::cout << "Resource Acquired\n"; 
    }
    ~HardwareResource() 
    {
         std::cout << "Resource Released Automatically\n"; 
    }
    void performTask() 
    {
         std::cout << "Working...\n"; 
    }
};

void process()
{
    HardwareResource res; // Acquired here
    res.performTask();
    // No 'delete' needed. Even if an error occurs, ~HardwareResource() runs.
} // Released here
