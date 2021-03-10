#include <iostream>

using namespace std;

int main()
{
    int age = 19;
    double gpa = 5.0; // gpa: grade point average
    string name = "Zeynep";

    cout << &age << endl; // memory address
    // where the age variable is stored

    // pointers, memory addresses

    cout << "Age: " << &age << endl;
    cout << "Gpa: " << &gpa << endl;
    cout << "Name: " << &name << endl;

    int *pAge = &age;
    double *pGpa = &gpa;
    string *pName = &name;

    cout << pAge << endl;
    cout << pGpa << endl;
    cout << pName << endl;

    cout << *pAge << endl;
    cout << *pGpa << endl;
    cout << *pName << endl;

    cout << *&age << endl;
    cout << *&gpa << endl;
    cout << *&name << endl;

    return 0;
}
