#include <iostream>

using namespace std;

int main()
{
     int n;
    long f = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! invalid number";
    else {
        for(int i = 1; i <= n; ++i) {
            f *= i;
        }
        cout << "Factorial of " << n << " = " << f;
    }

    return 0;
}
