#include <iostream>

using namespace std;

string getDay(int DayNum){
string DayName;
    switch(DayNum){
    case 0:
        DayName="Sunday";
        break;
    case 1:
        DayName="Monday";
        break;
    case 2:
        DayName="Tuesday";
        break;
    case 3:
        DayName="Wednesday";
        break;
    case 4:
        DayName="Thursday";
        break;
    case 5:
        DayName="Friday";
        break;
    case 6:
        DayName="Saturday";
        break;
    default:
        DayName="Error";
    }
    return DayName;
}

int main()
{
    cout <<getDay(0)<< endl;
    cout <<getDay(1)<< endl;
    cout <<getDay(2)<< endl;
    cout <<getDay(3)<< endl;
    cout <<getDay(4)<< endl;
    cout <<getDay(5)<< endl;
    cout <<getDay(6)<< endl;
    cout <<getDay(1818)<< endl;
    return 0;
}
