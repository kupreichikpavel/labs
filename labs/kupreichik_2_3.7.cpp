#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
/*
3.7. все числа Армстронга;
*/
int main() {

    int size = 0;
    long sum = 0;
    int a, b;
    cout << "Input range [a,b]" << endl;
    cin >> a >> b;
    if (a>b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a<0 or b<0) {
        cout << "wrong range [a,b]" << endl;
        return 0;
    }

    for (int i = a; i <= b; i++) {
        int k = i;
        int n = i;
        while (k != 0) {
            size++;
            k = k / 10;
        }
        for (int j = 0; j < size; j++) {
            sum += pow(n % 10, size);
            n /= 10;
        }
        if (sum == i) {
            cout << sum << " ";
        }
        size = 0;
        sum = 0;
    }
    return 0;
}
