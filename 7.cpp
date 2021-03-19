#include <iostream>
using namespace std;
#define PI 3.14
int main()
{
    int r;
    float area;
    cout << "Enter the radius of the circle : ";
    cin >> r;
    cout << endl;
    area = PI * r * r;
    cout << "The area of the circle is: " << area << endl;
    return area;
}

/* 

Enter the radius of the circle : 2

The area of the circle is: 12.56

*/