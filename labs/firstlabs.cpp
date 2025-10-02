#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    double epsilion;
    double term;
    double sum = 0;
    int k = 1;;
    cout << "Please enter x value: ";
    cin >> x;
    while (x >= 2 * M_PI || x <= -2 * M_PI) {
        if (x < 0) {
            x = x + 2 * M_PI;
        } else {
            x = x - 2 * M_PI;
        }
    }
    cout << "Please enter epsilon value: ";
    cin >> epsilion;
    term = 1;
    while (fabs(term) >= epsilion) {
        sum += term;
        term = (x * term / k);
        k++;
    }
    cout << "e= " << pow(M_E, x) << endl;
    cout << "e(x) =  " << sum;
    return 0;
}

/*#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x;
    double epsilion;
    double term;
    double sum = 0;
    int k = 1;
    cout << "Please enter x value: ";
    cin >> x;
    while (x >= 2 * M_PI || x <= -2 * M_PI) {
        if (x < 0) {
            x = x + 2 * M_PI;
        } else {
            x = x - 2 * M_PI;
        }
    }
    cout << "Please enter epsilon value: ";
    cin >> epsilion;
    term = 1;
    while (fabs(term) >= epsilion) {
        sum += term;
        term = (-x*term / k);
        k++;
    }
    cout << pow(M_E, -x) << endl;
    cout << "e(-x) =  " << sum;
    return 0;
}*/
