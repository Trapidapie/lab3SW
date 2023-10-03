#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

double isNum() {
    std::string userInput;
    double numberValue;
    bool validInput = false;

    while (!validInput) {
        std::cout << "Enter value:";
        std::cin >> userInput;
        std::istringstream iss(userInput);
        if (iss >> numberValue) {
            validInput = true; // Выход из цикла
        } else {
            std::cout << "is Nan" << std::endl;
        }
    }
    return numberValue;
}

int squareLevel() {
    cout << "a = ";
    auto a = isNum();
    cout << "b = ";
    auto b = isNum();
    cout << "c = ";
    auto c = isNum();
    if (a != 0) {
        double  D = pow(b, 2) - (4 * a * c);
        if (D > 0) {
            double  x1 = (-b + sqrt(D) / (2 * a));
            double  x2 = (-b - sqrt(D) / (2 * a));
            cout << x1 << endl;
            cout << x2 << endl;
        }
        else if (D == 0) {
            double  x1 = (-b / (2 * a));
            cout << x1 << endl;
        }
        else {
            cout << "This equation has not any solution" << endl;
        };
    }
    else {
        if (b != 0) {
            double  x1 = -c / b;
            cout << x1 << endl;
        }
        else {
            if (c == 0) {
                cout << "infinite number of solutions" << endl;
            }
            else {
                cout << "This equation has not any solution" << endl;
            };
        };
    };
    return 0;
};
// 1.2 друге завдання
int secondTask() {
    cout << "x = ";
    auto x = isNum();
    cout << "n = ";
    auto n = isNum();
    cout << "k = ";
    auto k = isNum();
    double  y = 0;
    for (int i = 1; i < n; i++) {
        if (x + 2 * i == 0) {
            if (x + 2 * i != k) {
                cout << "Error /0" << endl;
                return 1;
            }
            else {
                i++;
            }
        }
        else {
            y += i / (x + 2 * i);
        }
    }
    cout << y << endl;
    return 0;
}
// 1.3 третє завдання
int thirdTask() {
    cout << "x = ";
    auto x = isNum();
    cout << "n = ";
    int n = round(isNum());
    double  y;
    if(n > 0) {
        for (int i = 1; i < 2 * n; i++) {
            if (i % 2) {
                y *= (x + i);
            }
            else {
                y *= (x - i);
            };
        };
        cout << y << endl;
    } else {
        cout << "Error n is to small";
    }
    return 0;
};
// 1.4 четверте завдання
int fourthTask()
{
    cout << "Enter eps: ";
    double eps = isNum();
    long double k = .5;
    double sum = k;
    while (k/2 > eps)
    {
        k /= 2;
        sum += k;
    }
    cout << "sum = " << sum << "\n";
    return 0;
};
// ідз 1.5
int idz() {
    cout << "n = ";
    int n = round(isNum());
    while(n <= 0) {
        cout << "n must be bigger then 0";
        n = round(isNum());
    }
    cout << "a = ";
    auto a = isNum();
    cout << "b = ";
    auto b = isNum();
    cout << "h = ";
    auto h = isNum();
    double x = a;
    while (x < b) {
        double y = 0;
        if (x < 0) {
            for (int i = 1; i < n; i++) {
                for (int j = 1; j < n; j++) {
                    y += (1 / (x - i - j));
                };
            };
            cout << y << endl;
        }
        else {
            if (n > 4) {
                for (int i = 0; i < n - 3; i++) {
                    switch (i) {
                    case 1:
                        y -= (-x - i);
                    default:
                        y *= (-x - i);
                    }
                };
                cout << y << endl;
            }
            else {
                cout << "The cycle ended because n must be greater than 0." << endl;
                return 1;
            }
        };
        x += h;
    }
    return 0;
};

int main() {
//	squareLevel();
//    secondTask();
//    thirdTask();
    fourthTask();
//    idz();
}
