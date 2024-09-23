

#include <iostream>
using namespace std;
void reverse(int number) {// change function name suggestion(printNumberDigitsInReverse)
    int firstDigit = 1;


    for (; number; number /= 10) {//why no while loop?????
        int digit = number % 10;

        if (firstDigit) {// try to only use if in this case
            cout << digit;
            firstDigit = 0;
        }
        else {
            cout << ", " << digit;
        }
    }
}

int main()
{
    int num = 22345;
    reverse(num);// poor function naming
    //why no return 0????
}

