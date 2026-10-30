
#include <iostream>
using namespace std;

void change(int x)
{
    x = x + 10;
    cout << "Inside function: " << x << endl;
}

int main()
{
    int a = 20;

    cout << "Before function call: " << a << endl;

    change(a);

    cout << "After function call: " << a << endl;

    return 0;
}
