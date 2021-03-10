#include <iostream>

using namespace std;

int power(int baseNumber, int powerNumber){
    int result = 1;
    for(int i = 0; i < powerNumber; i++){
        result = result * baseNumber;
    }
    return result;
}

int main()
{
    // while

    int i = 1;
    while(i <= 5){
        cout << i << endl;
        i++;
    }

    // for

    for(int i = 1; i <= 5; i++){
        cout << i << endl;
    }

    int nums[] = {1,3,5,7,9};
    for(int i = 0; i < 5; i++){
        cout << nums[i] << endl;
    }

    cout << power(4,2) << endl;
    cout << power(3,3) << endl;
    cout << power(8,2) << endl;
    cout << power(5,3) << endl;

    // arrays

    int num[3][2] = {
                    {1,2},
                    {3,4},
                    {5,6}
                };

    cout << num[0][1] << endl;
    cout << num[1][0] << endl;

    for (int i = 0; i < 3; i++){
        for(int k = 0; k < 2; k++){
            cout << num[i][k];
        }
        cout << endl;
    }

    /*
    hi hi hi
    */

    return 0;
}
