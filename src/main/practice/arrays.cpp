#include "../DSA_Master.h"

int main(){
    array<int,5> a = {5,6,3,1,7};
    for(int x:a){
        cout<<x<<" , ";
    }
    std::cout << std::endl;
    cout << a.begin() << std::endl;

    vector<int> v = {1, 2, 3, 4, 5};
    v.push_back(28);
    // sort(v.begin(), v.end());
    sort(v.rbegin(), v.rend());

    for (int y : v)
    {
        cout << y << "," << endl;
    }
    return 0;
}
