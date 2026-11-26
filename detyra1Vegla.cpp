#include <iostream>
using namespace std;

double shuma(double a, double b) {
    return a + b;
}

int main() {
    // Detyreeee me GitHub

    double num1, num2, rezultati;
    cout << "Jepni numrin e pare: ";
    cin >> num1;
    cout << "Jepni numrin e dyte: ";
    cin >> num2;
    rezultati = shuma(num1, num2);
    cout << "Shuma e numrave eshte: " << rezultati;

    cout << "\n\n";
    system("pause");
    return 0;
}