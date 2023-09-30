#include <iostream>
#include <cmath>
#include <typeinfo>

using namespace std;
//1.1 квадратне рівняння
int squareLevel() {
    auto a = 0 ;
    auto b = 0;
    auto c = 0;
    cout << "a =";
    cin >> a;
    cout << "b =";
    cin >> b;
    cout << "c =";
    cin >> c;
//    try {
//        if (typeid(a).name() != "i" || typeid(b).name() != "i" || typeid(c).name() != "i" ) throw std::exception();
//    } catch (std::exception&e)
//    {
//        cout << "ERROR!" << endl;
//        return 0;
//    }
    if (a != 0) {
        double  D = pow(b, 2) - (4 * a * c);
        if (D > 0) {
            double  x1 = (-b + sqrt(D) / (2 * a));
            double  x2 = (-b - sqrt(D) / (2 * a));
            cout << x1 << endl;
            cout << x2 << endl;
        } else if (D == 0) {
            double  x1 = (-b / (2 * a));
            cout << x1 << endl;
        } else {
            cout << "This equation has not any solution" << endl;
        };
    } else {
        if (b != 0) {
            double  x1 = -c / b;
            cout << x1 << endl;
        } else {
            if (c == 0) {
                cout << "infinite number of solutions" << endl;
            } else {
                cout << "This equation has not any solution" << endl;
            };
        };
    };
    return 0;
};
// 1.2 друге завдання
int secondTask() {
    double  x;
    int n;
    int k;
    cout << "x =" << endl;
    cin >> x;
    cout << "n =" << endl;
    cin >> n;
    cout << "k =" << endl;
    cin >> k;
//    try {
//        if (typeid(x).name() != "i" || typeid(n).name() != "i" || typeid(k).name() != "i" ) throw std::exception();
//    } catch (std::exception&e)
//    {
//        cout << "ERROR!" << endl;
//        return 0;
//    }
    double  y = 0;
    for (int i = 1; i < n; i++) {
        if (x+2*i == 0) {
            if (x+2*i != k) {
                cout << "Error /0" << endl;
                return 1;
            } else {
                i++;
            }
        } else {
            y += i/(x+2*i);
        }
    }
    cout << y << endl;
    return 0;
}
// 1.3 третє завдання
int thirdTask() {
    double x;
    int n;
    cout << "x =" << endl;
    cin >> x;
    cout << "n =" << endl;
    cin >> n;
//    try {
//        if (typeid(x).name() != "i" || typeid(n).name() != "i") throw std::exception();
//    } catch (std::exception&e)
//    {
//        cout << "ERROR!" << endl;
//        return 1;
//    }
    double  y = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2) {
            y *= (x+i);
        } else {
            y *= (x-i);
        };
    };
    cout << y << endl;
    return 0;
};
// 1.4 четверте завдання
int fourthTask()
{
    double eps = 0;
    cout << "Enter eps: ";
    cin >> eps;
//    try {
//        if (typeid(eps).name() != "i") throw std::exception();
//    } catch (std::exception&e)
//    {
//        cout << "ERROR!" << endl;
//        return 1;
//    }
    double k = 0.5;
    double sum;
    while (k > eps) {
        sum += k;
        k /= 2;
    }
    cout << "sum = " << sum << "\n";
    return 0;
};
// ідз 1.5
int idz() {
    int n;
    cout << "n =" << endl;
    cin >> n;
    double a;
    cout << "a =" << endl;
    cin >> a;
    double b;
    cout << "b =" << endl;
    cin >> b;
    double h;
    cout << "h =" << endl;
    cin >> h;
//    try {
//        if (typeid(a).name() != "i" || typeid(b).name() != "i" || typeid(n).name() != "i" || typeid(h).name() != "i") throw std::exception();
//    } catch (std::exception&e)
//    {
//        cout << "ERROR!" << endl;
//        return 0;
//    }
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
        } else {
            if (n > 4){
                for (int i = 0; i < n - 3; i++) {
                    switch (i) {
                        case 1:
                            y -= (-x - i);
                        default:
                            y *= (-x - i);
                    }
                };
                cout << y << endl;
            } else {
                cout << "Error" << endl;
                return 1;
            }
        };
        x += h;
    }
    return 0;
};

int main() {
//    squareLevel();
//    secondTask();
//    thirdTask();
    fourthTask();
//    idz();
}

