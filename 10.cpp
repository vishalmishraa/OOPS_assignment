/* write a program to add complex number */
#include "iostream"
using namespace std;

class complex
{
public:
    int real;
    int img;

    complex(int x = 0, int y = 0)
    {
        real = x;
        img = y;
    }

    complex operator+(complex x)
    {
        complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
};

int main()
{
    complex c1(5, 7);
    complex c2(1, 2);
    complex c3;

    c3 = c1 + c2;

    cout << "sum of complex number is : " << c3.real << "+" << c3.img << "i\n";

    return 0;
}

/* 

sum of complex number is : 6+9i

*/