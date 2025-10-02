#include <iostream>
using namespace std;

int countOfAnyElements(int array[], int arraySize);

void swapik(int& , int& );

int main() {
    int b = 5;
    int a = 6;
    cout << a << endl;
    cout << b << endl;
    swap(a, b);
    cout << a << endl;
    cout << b << endl;
    return 0;
}

void swapik(int a, int b) {
    int temp;
    a = temp;
    a = b;
    b = temp;
}

int countOfAnyElements(int array[], int arraySize) {
    int count = 0;

    for (int i = 0; i < arraySize; i++) {
        int temp = array[i];
        for (int j = 0; j < arraySize; j++) {
            if (temp == array[j]) {
                count++;
            }
        }
    }
    if (count > 1) {
        cout << count - arraySize << endl;
    }
}
