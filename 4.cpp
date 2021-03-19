#include <iostream>
using namespace std;
int main()
{
    unsigned long long int i, x, fact = 1;
    cout << "Enter any number:";
    cin >> x;
    for (i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    cout << " Factorial of " << x << " is " << fact << endl;
    return 0;
}

/*

Enter any number:6
 Factorial of 6 is 720

*/
