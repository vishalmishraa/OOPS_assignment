#include "iostream"
using namespace std;

//call by value
void display(int x, int y)
{
    cout << "\nValue of A : " << x << endl;
    cout << "\nValue of b : " << y << endl;
}

//call by address
void swap1(int *p, int *q)
{
    int temp;

    temp = *p;
    *p = *q;
    *q = temp;
}

//call by refrence
void swap2(int &m, int &n)
{
    int temp;

    temp = m;
    m = n;
    n = temp;
}

//main func
int main()
{
    int A = 2, B = 4;
    cout << "\n Use of call by value to display A and B :\n";
    display(A, B);

    cout << "\n Use of call by address to swap A and B :\n";
    swap1(&A, &B);
    display(A, B);

    cout << "\n Use of call by refrence to again swap A and B :\n";
    swap2(A, B);
    display(A, B);

    return 0;
}

/*

 Use of call by value to display A and B :

Value of A : 2

Value of b : 4

 Use of call by address to swap A and B :

Value of A : 4

Value of b : 2

 Use of call by refrence to again swap A and B :

Value of A : 2

Value of b : 4

*/