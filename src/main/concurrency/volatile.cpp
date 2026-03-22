#include "../DSA_Master.h"

void learn()
{
    std::cout << "/* message */" << std::endl;
    uint8_t n = 99;
    std::cout << n << std::endl;

    volatile const uint32_t *const BUTTON_REG = (uint32_t *)0x4000;
    std::cout << BUTTON_REG << std::endl;
}

int main(){
    array<int,5> a = {5,6,3,1,7};
    for(int x:a){
        cout<<x<<" , ";
    }
    volatile bool buttonPressed = false;

    learn();

    return 0;
}
