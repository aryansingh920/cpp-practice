#include "../DSA_Master.h"


int main(){
    map<string, int> hmap;
    hmap["Alice"] = 23;
    hmap["Bob"] = 47;
    // cout << hmap["Alice"] << endl;

    for (const auto &[name, score] : hmap)
    { // Modern C++ structured binding
        cout << name << " has a score of " << score << endl;
    }

    // for (const pair<const string,int> &entry : hmap)
    // {
    //     // .first is the key ("Alice")
    //     // .second is the value (23)
    //     std::cout << entry.first << " has a score of " << entry.second << std::endl;
    // }
    return 0;
}
