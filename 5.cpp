#include <iostream>
using namespace std;

class base
{
private:
  int a, b;

public:
  void input()
  {
    cout << "\nEnter value of A and B for base class : ";
    cin >> a >> b;
  }
  void show()
  {
    cout << "\nSum = " << a + b << endl;
  }
};

class derive1 : public base
{
private:
  int n1, n2;

public:
  void input1()
  {
    cout << "\nEnter value of A nd B for derive1 class : ";
    cin >> n1 >> n2;
  }
  void show1()
  {
    cout << "\nMultiplication = " << n1 * n2 << endl;
  }
};

class derive2 : public base
{
private:
  int n3, n4;

public:
  void input2()
  {
    cout << "\nEnter value of A and B for derive2 class : ";
    cin >> n3 >> n4;
  }
  void show2()
  {
    cout << "\nSubstraction = " << n3 - n4 << endl;
  }
};

int main()
{
  derive1 ob1;
  derive2 ob2;

  ob1.input();
  ob1.show();

  ob2.input();
  ob2.show();

  ob1.input1();
  ob1.show1();

  ob2.input2();
  ob2.show2();
  return 0;
}

/* 

Enter value of A and B for base class : 4 6

Sum = 10

Enter value of A and B for base class : 10 23 

Sum = 33

Enter value of A nd B for derive1 class : 3 5

Multiplication = 15

Enter value of A and B for derive2 class : 43 20

Substraction = 23

*/