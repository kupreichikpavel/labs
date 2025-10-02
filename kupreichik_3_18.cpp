#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;
/*Вариант 18
В одномерном массиве, состоящем из 𝑛 целых элементов, вычислить:
• количество различных элементов;
• произведение элементов массива, расположенных после максимального по модулю
элемента.
Преобразовать массив таким образом, чтобы сначала располагались все отрицательные
элементы, а потом — все положительные (элементы, равные 0, считать положительными)*/
void chooseHowToFillArray(int array[], int arraySize);

void fillArrayRandomNumbers(int array[], int arraySize, int a, int b);

void printArray(int array[], int arraySize);

void fillArrayFromPerson(int a[], int arraySize);

void countOfAnyElements(int array[], int arraySize);

void multiElementAfterMax(int array[], int arraySize);

int main() {
    int array[100];
    setlocale(LC_ALL, "Russian");
    int arraySize;
back2:
    cout << "Введите размер массива : " << endl;
    cin >> arraySize;
    if (arraySize > 100 or arraySize < 1) {
        cout << "Неправильный размер массива, введите его повторно  " << endl;
        goto back2;
    }
    chooseHowToFillArray(array, arraySize);
    printArray(array, arraySize);
    countOfAnyElements(array, arraySize);
    multiElementAfterMax(array, arraySize);

    return 0;
}

void chooseHowToFillArray(int array[], int arraySize) {
    cout << "Как вы хотите заполнить массив?" << endl;
back:
    cout << "Eсли руками то введите 1, если рандомно то 2 " << endl;
    int number;
    cin >> number;
    switch (number) {
        case 1: {
            fillArrayFromPerson(array, arraySize);
            break;
        }
        case 2: {
            cout << "Массив будет заполняться случайными числами, введите диапазон ввода [a,b] с клавиаутры" << endl;
            int a, b;
            cout << "a = ";
            cin >> a;
            cout << "b = ";
            cin >> b;
            if (a > b) swap(a, b);
            fillArrayRandomNumbers(array, arraySize, a, b);
            break;
        }
        default: {
            cout << "Введено не правильное число, введите число заново" << endl;
            goto back;
        }
    }
}

void fillArrayRandomNumbers(int array[], int arraySize, int a, int b) {
    cout << "Вы выбрали заполнение массива случайными числами" << endl;
    srand(time(0));
    for (int i = 0; i < arraySize; i++) {
        array[i] = a + rand() % (b - a + 1);
    }
}

void fillArrayFromPerson(int a[], int arraySize) {
    cout << "Вы выбрали ввод руками, введите " << arraySize << " элементов " << endl;
    for (int i = 0; i < arraySize; i++) {
        int number;
        cin >> number;
        a[i] = number;
    }
}

void countOfAnyElements(int array[], int arraySize) {
    int count = 0;
    int number = 0;
    for (int i = 0; i < arraySize; i++) {
        for (int j = 0; j < arraySize; j++) {
            if (array[i] != array[j]) {
                count++;
            }
        }
        if (count == arraySize - 1) {
            number++;
        }
        count = 0;
    }

    cout << "Количество различных элементов - " << number << endl;
}

void multiElementAfterMax(int array[], int arraySize) {
    int maxElement = array[0];
    unsigned int multi = 1;
    int number = 0;
    for (int i = 0; i < arraySize; i++) {
        if (abs(array[i]) > maxElement) {
            maxElement = array[i];
            number = i;
        }
    }
    for (number; number < arraySize; number++) {
        multi *= array[number];
    }
        cout << "Произведение элементов после максимального по модулю значения- " << multi << endl;
    }



void printArray(int array[], int arraySize) {
    cout << "Ваш массив:" << endl;
    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << " " << endl;
    }
}
