#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double x, xp, xk, dx, y;

    // Введення початкових даних
    cout << "Enter the initial value of x (xp): "; cin >> xp;
    cout << "Enter the final value of x (xk): "; cin >> xk;
    cout << "Enter the step dx: "; cin >> dx;

    cout << fixed;
    cout << "-----------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |" << setw(15) << "y" << " |" << endl;
    cout << "-----------------------------------------" << endl;

    // Цикл для обчислення значень y при різних x
    x = xp;
    while (x <= xk) {
        double abs_x3 = fabs(pow(x, 3)); // |x^3|

        if (x < -1) {
            y = abs_x3 + fabs(2 + x) + pow(sin(x), 2);  // x < -1
        }
        else if (x >= -1 && x <= 1) {
            y = abs_x3 + atan(pow(x, 3) + 1);  // -1 <= x <= 1
        }
        else if (x > 0.1) {
            y = abs_x3 + pow(exp(1), cos(x)) + log10(1.0 / x + 1);  // x > 0.1
        }

        // Виведення результатів
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(15) << setprecision(5) << y
            << " |" << endl;

        x += dx;  // Збільшення на крок
    }

    cout << "-----------------------------------------" << endl;

    return 0;
}
