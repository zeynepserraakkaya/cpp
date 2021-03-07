#include <iostream>

using namespace std;

int main()
{
    string name1, name2;

    cout <<"Name 1: ";
    getline(cin, name1);

    cout <<"Name 2: ";
    getline(cin, name2);

    cout <<"I am "<<name1<< endl;
    cout <<"I love "<<name2<< endl;

    string name;

    cout <<"Your name: ";
    getline(cin,name); // get line for strings
    cout <<"Hi "<<name<<"."<< endl;

    int age;

    cout <<"Your age: ";
    cin >> age; // c in
    cout <<"Age: "<<age<< endl;

    double num1,num2;

    cout <<"Number 1: "<< endl;
    cin >> num1;
    cout <<"Number 2: "<< endl;
    cin >> num2;
    cout <<"Number 1 + Number 2 = "<<num1+num2<< endl;

    return 0;
}
