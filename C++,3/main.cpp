#include <iostream>

using namespace std;
void sayHi(string name){ // parameters
    cout <<"Hi "<<name<< endl;
}

double cube(double number){
    double result=number*number*number;
    return result;
    // return number*number*number;
}

int main()
{
    // functions
    sayHi("Zeynep");
    sayHi("Elif");

    cout <<cube(5.0)<< endl;
    cout <<cube(5.5)<< endl;

    double answer=cube(6);
    cout <<answer<< endl;

    // arrays
    int myNumbers[]={4,8,12,16,20,24};
    cout <<myNumbers[0]<< endl;
    myNumbers[0]=40;
    cout <<myNumbers[0]<< endl;

    int myNums[15];
    myNums[10]=101;
    cout <<myNums[10]<< endl;

    return 0;
}
