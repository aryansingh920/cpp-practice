#include "DSA_Master.h"

int main()
{
    int myNumber = 13;

    // Convert to a 8-bit binary representation
    // std::bitset<8> bits(myNumber);

    for (size_t i = 0; i <= 10; i++)
    {
        bitset<4> bits(i);
        std::cout << "Binary:  " << bits << std::endl;
    }

    // std::cout << "Decimal: " << myNumber << std::endl;
    // Output: 00001101

    return 0;
}
