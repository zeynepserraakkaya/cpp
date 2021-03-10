#include <iostream>

using namespace std;

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

    return 0;
}
