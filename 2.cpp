#include <iostream>
using namespace std;

void show(int x, int y)
{
    cout << "The Two numbers are= " << x << " , " << y << endl;
}

void show(float q, float w, float e)
{
    cout << "The Three numbers are = " << q << " , " << w << " , " << e << endl;
}

int main()
{
    show(2, 3);
    show(3.4, 1.3, 5.6);
    return 0;
}

/*

The Two numbers are= 2 , 3
The Three numbers are = 3.4 , 1.3 , 5.6

 */