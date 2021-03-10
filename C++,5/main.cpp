#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    char op;

    cout <<"Number 1: "<< endl;
    cin >> n1;

    cout <<"Operator: "<< endl;
    cin >> op;

    cout <<"Number 2: "<< endl;
    cin >> n2;

    if(op=='+'){
        return n1+n2;
    }else if(op=='-'){
        return n1-n2;
    }else if(op=='*'){
        return n1*n2;
    }else if(op=='/'){
        return n1/n2;
    }else{
        cout <<"Error."<< endl;
    }

    return 0;
}
