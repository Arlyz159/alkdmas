#include <iostream>
using namespace std;

void imprimir(const int arr[], int tam, int i = 0) {
    if(tam == 0) 
        return;
    cout << arr[i] << " ";
    imprimir(arr, tam-1, ++i);
}

void invertir(int arr[], int tam) {
    for(int i = 0; i < tam/2; i++) {
        int temp = arr[i];
        arr[i] = arr[tam-1];
        arr[tam-i-1] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    invertir(arr, 5);
    imprimir(arr, 5);
}