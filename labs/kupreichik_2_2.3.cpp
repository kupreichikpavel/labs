#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
/*
2.3. двойные палиндромы; Натуральное число называется двойным палиндромом, если оно само и его квадрат
являются палиндромами.
*/
int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    if (n<0) {
        cout << "Number must be greater than 0." << endl;
        return 0;
    }
    int nsquared = n * n;
    int myN = nsquared;
    int reverse = 0;
    while (nsquared != 0) {
        reverse = reverse * 10 + (nsquared % 10);
        nsquared /= 10;
    }
    if (reverse == myN) {
        cout << "double polindrom";
    } else {
        cout << "not double polindrom";
    }
    return 0;
}
