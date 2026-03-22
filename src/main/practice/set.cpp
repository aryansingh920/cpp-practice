#include "../DSA_Master.h"


int main(){
    set<int> nums;
    for (int i = 10; i <= 100;i+=10){
        nums.insert(i);
    }
    // std::cout << nums.count(31) << std::endl;
    nums.erase(50);
    for (int x : nums)
    {
        std::cout << x << std::endl;
    }
        return 0;
}
