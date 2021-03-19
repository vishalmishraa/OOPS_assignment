#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char paragraph[100];
    ofstream FILE;
    FILE.open("data.txt"); // WRITE MODE

    cout << "Enter Some Text : ";
    cin.getline(paragraph, 100);

    FILE << paragraph << endl;
    FILE.close();

    ifstream FILE_READ;
    FILE_READ.open("data.txt"); // READ MODE

    FILE_READ >> paragraph;
    cout << "entered text is : " << paragraph << endl;
    FILE_READ.close();
    return 0;
}

/* 

Enter Some Text : hello
entered text is : hello

*/
