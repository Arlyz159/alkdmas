#include <iostream>
using namespace std;

void imprimir(const int arr[], int tam, int i = 0) {
    if(tam == 0) 
        return;
    cout << arr[i] << " ";
    imprimir(arr, tam-1, ++i);
}

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void invertir(int arr[], int tam) {
    for(int i = 0; i < tam/2; i++) {
        intercambio(arr[i], arr[tam-i-1]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    invertir(arr, 5);
    imprimir(arr, 5);
}