#include <iostream>
using namespace std;

int main() {
    //1.1. проверяет, различны ли цифры в записи числа
    int n;
    cout << "Enter the number : ";
    cin >> n;
    if (n<0) {
        cout << "Number must be greater than zero";
        return 0;
    }
    int myNum = n;
    while (n > 0) {
        int lastNum = n % 10;
        int tempNumber = myNum;
        int digitCount = 0;
        while (tempNumber > 0) {
            if (tempNumber % 10 == lastNum) {
                digitCount++;
            }
            tempNumber /= 10;
        }
        if (digitCount > 1) {
            cout << "NO";
            return 0;
        }
        n /= 10;
    }
    cout << "YES";
    return 0;
}
