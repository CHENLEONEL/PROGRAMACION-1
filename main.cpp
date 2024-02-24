#include <iostream>
using namespace std;

void generateFibonacci(int n) {
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    cout << "Tabla de Fibonacci hasta el numero" << n << ":" << endl;
    cout << "Termino   |   Valor" << endl;
    cout << "1         |   " << fib[0] << endl;
    cout << "2         |   " << fib[1] << endl;

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << i + 1 << "         |   " << fib[i] << endl;
    }
}

int main() {
    int num;
    cout << "Ingrese un numero para generar la tablade FIBONACCI: ";
    cin >> num;

    generateFibonacci(num);

    return 0;
}