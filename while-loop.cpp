#include <iostream>
using namespace std;
int main()
{
    int enteredpassword;
    int correctpassword = 8088;
    cout << "enter the password:" << endl;
    cin >> enteredpassword;
    while (enteredpassword != correctpassword)
    { // we use while loop when the number of repeatation is unknown

        cout << "incorrect password, try again:";
        cin >> enteredpassword; // this value will print until the user enetered correct password
    }
    {
        cout << "device unlock" << endl;
    }
    return 0;
}
