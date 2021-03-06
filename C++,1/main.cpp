#include <iostream>

using namespace std;

int main() // function
{
    cout << "Hello world!" << endl; // c out # end line
    cout << "I am Zeynep." << endl;

    cout << "   /|" << endl;
    cout << "  / |" << endl;
    cout << " /  |" << endl;
    cout << "/___|" << endl;

    // variables
    string myName="Zeynep";

    int myAge; // integer
    myAge=19;

    cout << "I am Zeynep" << endl;
    cout << "I am " <<myName<<endl;

    cout << "I am 19" << endl;
    cout << "I am " <<myAge<<endl;

    cout << "I am " <<myName<< " and I am " <<myAge<< "." <<endl;

    myName="Gizem";
    cout << "I am " <<myName<<endl;

    // data types
    char a='A'; // character
    string x="C++ Programming Language";
    int y=48; // integer
    float k=15.0;
    float l=15.5;
    double e=15.5;
    double f=15.0;
    double g=-14.4;
    bool isA=true; // boolean
    bool isB=false;

    cout <<a<< endl;
    cout <<x<< endl;
    cout <<"Hi."<< endl; // constant
    cout <<isA<< endl; // 1 is true.
    cout <<isB<< endl; // 0 is false.

    // strings
    cout <<"Zeynep"<< endl;
    cout <<"Akkaya"<< endl;
    cout <<"Zeynep";
    cout <<"Akkaya"<< endl;
    cout <<"Zeynep\n"; // \n new line
    cout <<"Akkaya"<< endl;
    cout <<"Zeynep\nAkkaya"<< endl;

    myName="Zeynep";
    cout <<myName<< endl;
    cout <<myName.length()<< endl; // .function()
    cout <<myName[0]<< endl;
    myName[0]='X';
    cout <<myName<< endl;
    cout <<myName.find("Xey",0)<< endl; // parameters , arguments , information
    cout <<myName.substr(0,3)<< endl;
    cout <<myName.substr(0,6)<< endl;
    string sub;
    sub=myName.substr(0,3);
    cout <<sub<< endl;

    // numbers
    cout <<4+4<< endl;
    cout <<8-4<< endl;
    cout <<13.3<< endl;
    cout <<-13.3<< endl;
    cout <<3*9<< endl;
    cout <<9/3<< endl;
    cout <<10%3<< endl; // 10 mod 3
    y=5;
    cout <<y<< endl;
    y++;
    cout <<y<< endl;
    y--;
    cout <<y<< endl;
    y+=50;
    cout <<y<< endl;

    cout <<10/3<< endl;
    cout <<10.0/3.0<< endl;
    cout <<15.5/5<< endl;

    cout <<pow(2,2)<< endl;
    cout <<pow(2,4)<< endl;
    cout <<pow(3,3)<< endl;

    cout <<sqrt(36)<< endl;
    cout <<sqrt(25)<< endl;

    cout <<round(4.2)<< endl;
    cout <<round(4.5)<< endl;
    cout <<round(5.5)<< endl;

    cout <<ceil(4.5)<< endl;
    cout <<ceil(5.5)<< endl;
    cout <<ceil(1.1)<< endl;

    cout <<floor(4.5)<< endl;
    cout <<floor(5.5)<< endl;
    cout <<floor(1.9)<< endl;

    cout <<fmax(5,10)<< endl;
    cout <<fmin(5,10)<< endl;
    return 0;
}
