#include <iostream>
using namespace std;
class A
{
private:
    int a, b;

public:
    void input()
    {
        cout << " Enter two numbers : ";
        cin >> a >> b;
    }
    friend void add(A);
};

void add(A obj)
{
    int c;
    c = obj.a + obj.b;
    cout << " \n sum = " << c << endl;
}

int main()
{
    A obj;
    obj.input();
    add(obj);
    return 0;
}

/* 

 Enter two numbers : 10 15
 
 sum = 25

*/
