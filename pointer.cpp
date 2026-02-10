#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *p = &a;

    *p = 20;   // change value using pointer

    cout << "a = " << a << endl;

    return 0;
}
