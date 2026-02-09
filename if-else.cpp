#include <iostream>
using namespace std;
int age;

int main()
{
    cout << "enter your age";
    cin >> age;
    if (age >= 18){
        cout << "you are an adult";}
    else
    {
        cout << "you are too young";
    }
    return 0;
}
