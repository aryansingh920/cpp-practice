#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

void modify(int &x)
{
    x = 100;
}

void pointer()
{
    // int x = 100;
    // cout << &x << "\n";
    // int *p = &x;
    // cout << &x << " " << &p << "\n";

    // cout << *p << "\n";

    int x = 100;
    int *p1 = &x; // p1 points to x
    int *p2 = &x; // p2 points to x too!

    *p1 = 50;
    cout << *p2; // Output: 50 (p2 sees what p1 did)

    cout << endl;
}

int *heapPrimitive()
{
    int *p = new int(5); // 'p' (the address) is on Stack; '5' is on Heap.
    cout << &p;
    return p; // The value '5' stays alive even after this function ends.
}
// WARNING: Someone must call 'delete p' later or it's a leak!

int main(){

    // int a = 10;
    // long long b = 9999999999999999999LL;
    // double d = 22.0 / 7.0;
    // bool flag = true;
    // flag = false;
    // char ch = 'A';
    // auto x = 10;
    // cout << "Hello World!" << endl;
    // cout << b << "," << d << x << endl;
    // int xy;
    // cin >> xy;
    // cout << xy+a+d << endl;
    // printf("Hi\n");
    // string s;
    // cout << "Enter name : ";
    // cin >> s;
    // cout << "Hi " << s;
    // int age;
    // scanf("%d", &age);
    // printf("Hi %d\n", age);
    // if (10 > 5){
    // }else if (10 > 5)
    // {
    //     /* code */
    // }else{
    // }
    // for (int i = 1; i <= 10;i++){
    //     cout << i << ", ";
    // }
    // cout << endl;
    // while (condition)
    // {
    //     /* code */
    // }
    // do
    // {
    //     /* code */
    // } while (10);
    // vector<int> v = {1, 2, 3, 4, 5};
    // for(int num : v){
    //     cout << num << ", ";
    // }
    // cout << add(4, 3);

    // int x = 10;
    // cout << x << "\n";
    // modify(x);
    // cout << x;

    // pointer();
    // cout << &pointer << "\n";
    heapPrimitive();
    cout << endl;
    return 0;
}
