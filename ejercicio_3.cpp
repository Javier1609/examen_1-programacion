#include <iostream>

void intercambiar(int* A, int* B) {
    int temp = *A;
    *A = *B;
}

int main() {
    int a = 5;
    int b = 10;

    std::cout << "Valores iniciales: a = " << a << ", b = " << b << std::endl;


    intercambiar(&a, &b);

    std::cout << "Valores intercambiados: a = " << a << ", b = " << b << std::endl;

    return 0;
}