#include <iostream>
using namespace std;
int main()
{
    int x, i, prime = 0;
    cout << "Enter a number : ";
    cin >> x;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            prime = 1;
        }
    }
    if (x == 1)
    {
        cout << "1 is not a prime number" << endl;
    }
    else if (prime == 0)
    {
        cout << x << " is a prime number " << endl;
    }
    else
    {
        cout << x << " is not a prime number " << endl;
    }
    return 0;
}

/*

output 1 :

Enter a number : 1009
1009 is a prime number 

output 2 : 

Enter a number : 1001
1001 is not a prime number 

*/