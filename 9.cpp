/* Write a program to show the use of template class */
#include "iostream"
#include "typeinfo"
using namespace std;

template <class T>
class demo
{
    T x, y;

public:
    demo(T a, T b)
    {
        x = a;
        y = b;
    }

    T sum()
    {
        return (x + y);
    }
};

int main()
{
    demo<int> d1(10, 20);
    cout << "sum of int numbner = " << d1.sum() << endl;

    demo<float> d2(2.4f, 5.4f);
    cout << "sum of float number : " << d2.sum() << endl;

    return 0;
}
/* 
output

sum of int numbner = 30
sum of float number : 7.8

*/