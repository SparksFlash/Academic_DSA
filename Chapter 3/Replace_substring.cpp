#include <iostream>
using namespace std;
int main()
{
    string string1 = "Today I will eat Apple";
    string string2 = "Mango";

    string1.replace(17, 5, string2);

    cout << "After using replace() function : " << string1 << '\n';
}
